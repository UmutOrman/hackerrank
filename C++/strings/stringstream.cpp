#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  vector<int> results;
  int count = 0;
  for(int i = 0; i < str.size(); i++){
    if(str[i] == ',')
      count++;
  }
  stringstream ss(str);
  for(int i = 0; i < count; i++){
    int next;
    char c;
    ss >> next;
    ss >> c;
    results.push_back(next);
  }
  int next;
  ss >> next;
  results.push_back(next);
  return results;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
