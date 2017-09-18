#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  int n,target, start, end;
  vector<int> moj_vec;
  cin >> n;
  for(int i = 0; i < n; i++){
    int next;
    cin >> next;
    moj_vec.push_back(next);
  }
  cin >> target;
  moj_vec.erase(moj_vec.begin()+target - 1 );
  cin >> start >> end;
  moj_vec.erase(moj_vec.begin() + start -1, moj_vec.begin() + end -1);
  cout << moj_vec.size() << endl;
  for(int i = 0; i < moj_vec.size(); i++){
    cout << moj_vec[i] << " ";
  }
  cout << endl;
    return 0;
}
