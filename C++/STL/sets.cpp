#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  set<int> s;
  cin >> n;
  for(int i = 0; i < n; i++){
    int q_type, number;
    cin >> q_type >> number;
    if(q_type == 1)
      s.insert(number);
    else if(q_type == 2){
      set<int>::iterator it = s.find(number);
      if(it == s.end())
	continue;
      else
	s.erase(number);
    }
    else{
      set<int>::iterator it = s.find(number);
      if(it == s.end())
	cout << "No" << endl;
      else
	cout << "Yes" << endl;
    }
  }
    return 0;
}
