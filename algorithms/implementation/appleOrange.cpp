#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    
    int n_apples = 0,n_oranges = 0;
    for(int i = 0; i < apple.size(); i++ ){
      if(apple[i] + a >= s && apple[i] + a <= t)
	n_apples++;
    }
    for(int i = 0; i < orange.size(); i++){
      if(orange[i] + b >= s && orange[i] + b <= t)
	n_oranges++;      
    }
    printf("%d\n%d\n",n_apples,n_oranges);
    return 0;
}
