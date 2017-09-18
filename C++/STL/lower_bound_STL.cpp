#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/* binary Search
bool findNumberByIndex(int number, vector<int> vec){
  int index,start = 0, end = vec.size();
  while(start < end ){    
    index = (start + end) / 2;
    if(vec[index] == number){      
      return true;
    }
    else if(vec[index] > number){
      end = index - 1 ;
    }
    else{
      start = index + 1;
    }
  }
  if(vec[start] == number){       
    return true;
  }
  return false;
}
*/

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  int n,q;
  vector<int> moj_vec;
  cin >> n;
  for(int i = 0; i < n; i ++){
    int next;
    cin >> next;
    moj_vec.push_back(next);
  }
  cin >> q;
  for(int i = 0; i < q; i++){
    int query;
    cin >> query;
    vector<int>::iterator low;
    low = lower_bound(moj_vec.begin(), moj_vec.end(), query);
    //findNumberByIndex(query, moj_vec);
    int index = (low - moj_vec.begin());
    if(moj_vec[index] == query)
      cout << "Yes" << " " << (low - moj_vec.begin() + 1) << endl;    
    else
      cout << "No" <<  " " << (low - moj_vec.begin() + 1) << endl;
  }
    return 0;
}
