#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

void insertionSort(int ar_size, vector<int>  ar) {
  int i,j,value,n_shifts = 0;
  for( i = 1; i < ar.size(); i++){
    value = ar[i];
    int hole = i - 1;
    while(ar[hole] > value){
      ar[hole + 1] = ar[hole];
      hole--;
      n_shifts++;
    }
    ar[hole + 1] = value;  
  }
  cout << n_shifts << endl;
}





int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    vector<int> _ar(_ar_size);
    int _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}
