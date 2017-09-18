#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int n;
  vector<int> moj_vec;
  cin >> n;
  for(int i = 0; i < n ; i++){
    int next;
    cin >> next;
    moj_vec.push_back(next);
  }
  sort(moj_vec.begin(), moj_vec.end());
  for(int i = 0; i < moj_vec.size(); i++ )
    cout << moj_vec[i] << " ";
    return 0;
}
