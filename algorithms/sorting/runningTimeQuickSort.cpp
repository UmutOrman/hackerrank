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



int insertionSort(int ar_size, vector<int>  ar) {
  int i,value,n_shifts = 0;
  for( i = 1; i < ar.size(); i++){
    value = ar[i];
    int hole = i - 1;
    while(ar[hole] > value && hole > -1){
      ar[hole + 1] = ar[hole];
      hole--;
      n_shifts++;
    }
    ar[hole + 1] = value;  
  }
  return n_shifts;
}


void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int partition(vector <int> &ar, int start, int end, int &n_swaps) {  
  int pivot = ar[end];
  int pIndex = start;
  int first_after_pivot;
  for(int i = start; i < end; i++){
    if(ar[i] <= pivot ){
      swap(&ar[i],&ar[pIndex]);
      pIndex++;
      n_swaps++;
    }  
  }
  swap(&ar[pIndex],&ar[end]);
  n_swaps++;
  return pIndex;
}

void quickSort(vector <int> &ar, int start, int end, int &n_swaps){
  if(start < end ){
    int pIndex = partition(ar, start, end, n_swaps);
    quickSort(ar,start,pIndex - 1 , n_swaps);
    quickSort(ar,pIndex + 1 ,end, n_swaps);          
  }
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
   int n_shifts = insertionSort(_ar_size,_ar);
   int start = 0, n_swaps = 0;
   int end = _ar.size() - 1 ;
   quickSort(_ar, start, end, n_swaps);
   cout << n_shifts - n_swaps << endl;
   return 0;
}
