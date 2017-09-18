#include <iostream>
using namespace std;

// Enter your code for reversed_binary_value<bool...>()
#include <cmath>

template <bool...digits>
int reversed_binary_value(){
  int number = 0;
  const size_t size = sizeof...(digits);
  bool bits[size] = {digits...};
  for(int i = size - 1; i >= 0; i--){
    if(bits[i])
      number += pow(2, i); 
  } 
  return number;
}

template <int n, bool...digits>
struct CheckValues {
  	static void check(int x, int y)
  	{
    	CheckValues<n-1, 0, digits...>::check(x, y);
    	CheckValues<n-1, 1, digits...>::check(x, y);
  	}
};

template <bool...digits>
struct CheckValues<0, digits...> {
  	static void check(int x, int y)
  	{
    	int z = reversed_binary_value<digits...>();
    	std::cout << (z+64*y==x);
  	}
};

int main()
{
  	int t; std::cin >> t;

  	for (int i=0; i!=t; ++i) {
		int x, y;
    	cin >> x >> y;
    	CheckValues<6>::check(x, y);
    	cout << "\n";
  	}
}

