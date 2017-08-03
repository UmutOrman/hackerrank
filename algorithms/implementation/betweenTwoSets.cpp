#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector < int > a, vector < int > b,int maxA,int minB){
    // Complete this function
  int total = 0;
  for(int i = maxA; i <= minB; i++){
    bool case_checkA = true, case_checkB = true;
    for(int j = 0; j < a.size(); j++){   
      if( i % a[j] != 0 ){
	case_checkA = false;
	break;
      }	
    }
    if(case_checkA){
      for(int j = 0; j < b.size(); j++)
	if(b[j] % i != 0){
	  case_checkB = false;
	  break;
	}	  
    }
    if(case_checkB && case_checkA)
      total++;
  }
  return total;
}

int main() {
    int n;
    int m;
    int maxA = INT_MIN,minB = INT_MAX;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){      
      cin >> a[a_i];
      if(a[a_i] > maxA)
	maxA = a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){      
      cin >> b[b_i];
      if(minB > b[b_i])
	minB = b[b_i];
    }

    int total = getTotalX(a, b,maxA,minB);
    cout << total << endl;
    return 0;
}
