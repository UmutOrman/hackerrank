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

// efficiency dropped down to make it stable algorithm
// till further solutions exist
int partition(vector <int> &ar, int start, int end) {      
  vector<int> stable(end);
  vector<int> temp;
  int pivot = ar[start - 1];
  int pIndex = start;
  int first_after_pivot;
  for(int i = 0; i < start -1 ; i++)
    stable[i] = ar[i];
  for(int i = start; i < end; i++){
    if(ar[i] <= pivot ){
      swap(&ar[i],&ar[pIndex]);
      stable[pIndex-1] = ar[pIndex];
      first_after_pivot = ar[i];
      pIndex++;
    }  
    else{
      temp.push_back(ar[i]);
    }
  }
  pIndex--;
  swap(&ar[pIndex],&ar[start - 1]);
  stable[pIndex] = ar[pIndex];
  for(int i = pIndex + 1; i < end; i++)
    stable[i] = temp[i - (pIndex+1)];
  ar = stable;
  return pIndex;
}

void quickSort(vector <int> &ar, int start, int end){
  if(start < end ){
    int pIndex = partition(ar, start, end);
    //cout << pIndex << endl;
    //cout << endl;
    quickSort(ar,start,pIndex);
    quickSort(ar,pIndex + 2,end); 
    
    for(int i = start - 1; i < end; i++)
      cout << ar[i] << " ";
    cout << endl; 
    
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
   int start = 1;
   int end = _ar.size();
   quickSort(_ar, start, end);
   
   return 0;
}
