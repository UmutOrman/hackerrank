#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;

int main(){
  unsigned int n;
  long long int s,p,q;
  cin >> n >> s >> p >> q;
  const unsigned int twos31 = pow(2,31);  
  bitset<2147483648UL>* bits = new bitset<2147483648UL>(); // use heap memory instead of stack   
  int counter = 1;    
  unsigned int prev_number = s % twos31;
  bits->set(prev_number);
  
  for(int i = 1; i < n; i++){           
    long long int next_number = prev_number * p + q;
    if(next_number >= twos31){
      unsigned int next__number = next_number % twos31;    
      if(!bits->test(next__number)){
	bits->set(next__number);
	prev_number  = next__number;
      }
      else
	break;
    }
    else{
      unsigned int next__number = next_number;
      bits->set(next__number);
      prev_number = next__number;
    }
    counter++;
  }
  cout << counter << endl;

  delete bits;
  
  return 0;
}
