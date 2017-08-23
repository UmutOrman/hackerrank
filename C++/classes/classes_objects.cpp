#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {
private:
  vector<int> scores();
public:
  void input(){
    for(int i=0; i < 5; i++){
      int score;
      cin << score;
      scores.push_back(score);
    }
  }
  int calculateTotalScore(){
    int total_sum = 0;
    for(int i=0; i < 5; i ++)
      total_sum += scores[i];
    return total_sum;
  }
}; 
