#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int n,q;
  cin >> n >> q;
  vector< vector<int> > my_vec;
  for(int i = 0 ; i < n; i++){
    int len;    
    cin >> len;
    vector<int> row((len));   
    for(int j = 0; j < len; j++)
      cin >> row[j];       
    my_vec.push_back(row);
  }
  for(int i = 0; i < q; i++){
    int index_first,index_second;
    cin >> index_first >> index_second;
    cout << my_vec[index_first][index_second] << endl;
  }
    return 0;
}
