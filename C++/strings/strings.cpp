#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
  string a,b;
  cin >> a;
  cin >> b;
  cout << a.size() << " " << b.size() << endl;
  string a_ = a;
  a_[0] = b[0];
  string b_ = b;
  b_[0] = a[0];
  cout << a + b << endl;
  cout << a_ << " " << b_ << endl;
    return 0;
}
