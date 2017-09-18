#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int n;
  cin >> n;
  map<string,int> m;
  for(int i = 0; i < n; i++){
    int q_type, mark;
    string name;   
    cin >> q_type >> name;
    if(q_type == 1){
      cin >> mark;
      map<string,int>::iterator it = m.find(name);
      if(it == m.end())
	m.insert(make_pair(name,mark));
      else
	it->second += mark;
    }
    else if(q_type == 2){
      map<string,int>::iterator it = m.find(name);
      it->second = 0;
    }
    else{
      map<string,int>::iterator it = m.find(name);
      if(it == m.end())
	cout << 0 << endl;
      else
	cout << it->second << endl;
    }
  }
    return 0;
}
