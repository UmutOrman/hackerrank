    #include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function
};

class LRUCache : public Cache{
public:
  LRUCache(int);
  void set(int, int);
  int get(int);
};

LRUCache::LRUCache(int capacity){
  this->cp = capacity;
  this->tail = NULL;
  this->head = NULL;
}

void LRUCache::set(int key, int value){
  //check if key is not present in cache
             //MISS//
  if(!(mp.find(key) != mp.end())){     
    Node* moj_node = new Node(key,value);
    // if cache is full
    if(mp.size() == this->cp){
      //check if there is only one element in cache
      if(this->head->key == this->tail->key){
	mp.erase(this->head->key);
	this->head = moj_node;
	this->tail = moj_node;
	mp[key] = moj_node;
      }
      else{
	//delete last recently used
	int deleted_key = this->tail->key;
	this->tail->prev->next = NULL;
	this->tail = this->tail->prev;
	mp.erase(deleted_key);      
	//add new key to head
	moj_node->next = this->head;
	this->head->prev = moj_node;
	this->head = moj_node;
	mp[key] = moj_node;
      }
    }
    //if cache is not full, only do insertion
    else{   
      //check if cache is empty
      if(mp.size() == 0){
	this->head = moj_node;
	this->tail = moj_node;
	mp[key] = moj_node;
      }
      else{
	//add new key to head      
	moj_node->next = this->head;      
	this->head->prev = moj_node;	
	this->head = moj_node;
	mp[key] = moj_node;
      }
    }  
  }
  // check if key exists in cache
            /// HIT ///
  else{    
    //add key to head, delete old node and it's pointers
    Node* moj_node = new Node(key,value);
    //check for the case when key is in head node
    if(this->head->key == key){
      this->head->value = value;
    }
    else if(this->tail->key == key){
      //deleting old node
      mp[key]->prev->next = NULL;
      this->tail = mp[key]->prev;
      //updating head node
      moj_node->next = this->head;
      this->head->prev = moj_node;
      this->head = moj_node;
      mp[key] = moj_node;
    }
    else{
      //deleting old node
      mp[key]->prev->next = mp[key]->next;
      mp[key]->next->prev = mp[key]->prev;     
      //updating head node
      moj_node->next = this->head;
      this->head->prev = moj_node;
      this->head = moj_node;
      mp[key] = moj_node;
    }
  }
}

int LRUCache::get(int key){
  if(mp.find(key) != mp.end())
    return mp[key]->value;
  else
    return -1;
}

int main() {
   int n, capacity,i;
   cin >> n >> capacity;   
   LRUCache l(capacity);
   
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   
   return 0;
}
