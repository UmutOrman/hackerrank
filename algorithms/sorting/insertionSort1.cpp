#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
  int value = ar[ar.size() - 1 ];
  int hole = ar.size() - 2,i;
  while(ar[hole] > value){
    ar[hole+1] = ar[hole];
    for(i = 0; i < ar.size(); i++)
      cout << ar[i] << " ";
    cout << endl;
    hole--;    
  }
  ar[hole + 1] = value;
  for(i = 0; i < ar.size(); i++)
      cout << ar[i] << " ";
  cout << endl;
}

int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}
