#include <iostream>
#include <deque>
#include <climits> 
using namespace std;

// when head of deque is the maximum element in subarray
// find new maximum after adding new element to back of deque
int findMaxIndex(deque<int> d){
  int max = INT_MIN, index = 0;
  deque<int>::iterator it = d.begin();
  while(it != d.end()){   
    if(*it > max){
      max = *it;
      index = (it - d.begin());
    }
    it++;  
  }
  return index;
}

void printKMax(int arr[], int n, int k){
   //Write your code here.
  int cursor_front = 0,cursor_back = k - 1, max = INT_MIN, max_index;
  deque<int> moj_que;    
  for(int i = 0; i < k; i++){
    if(arr[i] > max){
      max = arr[i];
      max_index = i;
    }
    moj_que.push_back(arr[i]);          
  }    
  cout << max << " ";
  while(cursor_back < n - 1 ){
    if(moj_que[0] != max){
      moj_que.pop_front();
      cursor_front++;
      cursor_back++;
      moj_que.push_back(arr[cursor_back]);
      if(arr[cursor_back] >= max){
	max_index = cursor_back;
	max = arr[cursor_back];
      }      
      cout << max << " ";
    }
    else{     
      moj_que.pop_front();
      cursor_front++;
      cursor_back++;
      moj_que.push_back(arr[cursor_back]);      
      max_index = findMaxIndex(moj_que) + cursor_front;      
      max = arr[max_index];
      cout << max << " ";
    }
  }
  cout << endl;
}

int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
