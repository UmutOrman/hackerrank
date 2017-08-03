#include <bits/stdc++.h>

using namespace std;

int compare(string s1,string s2){
  int len1 = s1.length();
  int len2 = s2.length();
  if(len1 > len2)
    return 0;
  else if(len2 > len1)
    return 1;
  else{
    if(len1 < 10){
      int value1 = atoi(s1.c_str());
      int value2 = atoi(s2.c_str());
      if(value1 > value2)
	return 0;
      else
	return 1;
      
    }
    else{
      for(int i = 0;i < len1; i++){
	if(s1[i] < s2[i])
	  return 1;
	else if(s1[i] > s2[i])
	  return 0;
      }
    }
  }
  return 1;
}


vector<string> merge(vector<string> left, vector<string> right, vector<string> A){
  int lengthL = left.size();
  int lengthR = right.size();
  int i=0,j=0,k=0;
  while(i < lengthL && j < lengthR){    
    if(compare(left[i],right[j])){
      A[k] = left[i];
      i++;
    }
    else{
      A[k] = right[j];
      j++;
    }
    k++;
  }
  while(i < lengthL){
    A[k] = left[i];
    i++;
    k++;
  }
  while( j < lengthR){
    A[k] = right[j];
    j++;
    k++;
  }
  
  vector<string> result = A;
  return result;
}

vector<string> mergeSort(vector<string> A){
  int n = A.size();  
  if(n < 2)
    return A;
  int mid = n / 2;
  vector<string> left(mid);
  vector<string> right(n - mid);
  int i;
  for(i=0; i < mid; i++){ 
    left[i] = A[i];
  }
  for(i = mid; i < n; i++){
    right[i-mid] = A[i];
  }
 
  vector<string> left_sorted = mergeSort(left);
  vector<string> right_sorted = mergeSort(right);
  vector<string> result = merge(left_sorted,right_sorted,A);
  return result;
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);;
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }   
    
    vector<string> sorted_list = mergeSort(unsorted);    
    for(int i = 0; i < n; i++){
      cout << sorted_list[i] << endl;
    } 
    
    return 0;
}
