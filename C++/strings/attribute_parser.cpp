#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

class Tag{
 private:
  vector<string> taggy;
  string name; 
  vector<string> parent_tags;
 public:
  Tag(vector<string>);
  vector<string> getTagInfo();
  string getName();  
  vector<string> getParents();
  void setParents(vector<string>);
};

Tag::Tag(vector<string> tag){  
  this->taggy = tag;
  this->name = tag[0];
}

vector<string> Tag::getTagInfo(){
  return this->taggy; 
}

vector<string> Tag::getParents(){
  return this->parent_tags;
}

void Tag::setParents(vector<string> parents){
  this->parent_tags = parents;
} 

string Tag::getName(){
  return this->name;
}

vector<int> convertNumbersLine(string line){
  vector<int> results;
  stringstream ss(line);
  string buffer;
  while(ss >> buffer){
    int n = atoi(buffer.c_str());
    results.push_back(n);
  }
  return results;
}

string convertTagEnd(string tag){
  string moj_tag = "";
  for(int i = 2; i < tag.size() - 1 ; i++){
    moj_tag = moj_tag + tag[i];
  }
  return moj_tag;
}

void getTagLine(string tag, vector<string>& taggy){
  stringstream ss(tag); //insert string to stream
  string buffer;
  while(ss >> buffer){    
    if(buffer[0] == '<')
      buffer.erase(0,1);
    else if(buffer == "=")
      continue;
    else if(buffer[0] == '"' && buffer[buffer.size() - 1 ] == '"'){
      buffer.erase(0,1);
      buffer.erase(buffer.size() - 1,1);
    }
    else if(buffer[0] == '"' && buffer[buffer.size() - 1] == '>'){
      buffer.erase(0,1);
      buffer.erase(buffer.size() - 2, 2);
    }   
    taggy.push_back(buffer);
  }  
}

Tag findTagByName(string name, vector<Tag> tags){
  for(int i = 0; i < tags.size(); i++){
    if(name == tags[i].getName())
      return tags[i];
  }
  return tags[0]; // never gets here
}

int findTagIndexByName(string name, vector<Tag> tags){
  for(int i = 0; i < tags.size(); i++){
    if(name == tags[i].getName())
      return i;
  }
  return -1; // never gets here
}

string findValue(string value_name,Tag tag){
  vector<string> tagInfo = tag.getTagInfo();
  for(int i = 0; i < tagInfo.size() - 1; i++){
    if(value_name == tagInfo[i])
      return tagInfo[i+1];
  } 
    return "Not Found!";
}

string queryTag(string query, vector<Tag> tags){
  string result;
  vector<string> tag_names;
  vector<string> big_tokens;
  char str[200];
  strcpy(str,query.c_str());
  char* token;
  token = strtok(str,"~");
  while(token != NULL){    
    big_tokens.push_back(token);
    token = strtok(NULL,"~");
  }  
  char nested_str[200];
  strcpy(nested_str,big_tokens[0].c_str());
  char* token2;
  token2 = strtok(nested_str,".");
  while(token2 != NULL){    
      tag_names.push_back(token2);
      token2 = strtok(NULL,".");
  }   
  //check if tags are nested in right way
  vector<string> moj_parents = findTagByName(tag_names[tag_names.size()-1], tags).getParents();
  if(moj_parents.size() + 1 != tag_names.size()){
    result = "Not Found!";
    return result;
  }
  for(int i = 0; i < moj_parents.size(); i++){
    if(moj_parents[i] != tag_names[i]){
       result = "Not Found!";
       return result;
    }
  }
  
  result = findValue(big_tokens[big_tokens.size() - 1],findTagByName(tag_names[tag_names.size() - 1],tags));
  return result;
}

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  
  int n,q;
  vector<Tag> tags;
  vector<string> parents;   
  string numbers_line;
  getline(cin,numbers_line);
  vector<int> first_line = convertNumbersLine(numbers_line);
  n = first_line[0]; q = first_line[1];

  for(int i = 0; i < n; i++){
    string line;    
    getline(cin,line);
    if(line[1] == '/'){
      string tag_name = convertTagEnd(line);      
      int index = findTagIndexByName(tag_name,tags);         
      for(int j = 0; j < parents.size(); j++){	
	if(parents[j] == tag_name)	  	  
	  parents.erase(parents.begin() + j);	
      }
    }
    else{
      vector<string> tagLine;
      getTagLine(line,tagLine);    
      if(tagLine.size() == 1)
	tagLine[0].erase(tagLine[0].size() - 1,1);
      Tag mojTag(tagLine);      
      mojTag.setParents(parents);
      tags.push_back(mojTag);   
      parents.push_back(tagLine[0]);
    }
  }
 
  for(int i = 0; i < q; i++){
    string line;
    getline(cin,line);
    cout << queryTag(line, tags) << endl;
  }
  return 0;
}
