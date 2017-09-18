#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
  int a;
  long b;
  char c;
  float f;
  double df;
  cin >> a >> b >> c >> f >> df;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << fixed;
  cout << setprecision(3);
  cout << f << endl;
  cout << fixed;
  cout << setprecision(9);
  cout << df << endl;
    return 0;
}
