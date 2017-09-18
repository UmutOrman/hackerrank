#include <iostream>
#include <typeinfo>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <class T>
struct Traits{ 
  // method should be static since it is called without an object
  static string name(int index){
    switch(static_cast<T>(index)){
    case static_cast<T>(0):
      if(typeid(T) == typeid(Color))
	return "red";
      else
	return "apple";
    case static_cast<T>(1):
      if(typeid(T) == typeid(Color))
	return "green";
      else
	return "orange";
    case static_cast<T>(2):
      if(typeid(T) == typeid(Color))
	return "orange";
      else
	return "pear";
    }
    return "unknown";
  }
};

int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
