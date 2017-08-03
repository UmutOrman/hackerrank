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

void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

// in-place approach, for optimality in terms of space complexity, 
// however algorith is not stable this time
int partition(vector <int> &ar, int start, int end) {      ;
  int pivot = ar[end];
  int pIndex = start;
  int first_after_pivot;
  for(int i = start; i < end; i++){
    if(ar[i] <= pivot ){
      swap(&ar[i],&ar[pIndex]);
      pIndex++;
    }  
  }
  swap(&ar[pIndex],&ar[end]);
  for(int i = 0; i < ar.size(); i++)
    cout << ar[i] << " ";
  cout << endl;
  return pIndex;
}

void quickSort(vector <int> &ar, int start, int end){
  if(start < end ){
    int pIndex = partition(ar, start, end);
    quickSort(ar,start,pIndex - 1 );
    quickSort(ar,pIndex + 1 ,end);          
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
   int start = 0;
   int end = _ar.size() - 1 ;
   quickSort(_ar, start, end);
   
   return 0;
}
