#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student {
private:
  int age;
  string first_name;
  string last_name;
  int standard;
public:
  void set_age(int age){
    this->age = age;
  }
  int get_age(){
    return age;
  }
  string get_first_name(){
    return first_name;
  }
  void set_first_name(string name){
    this->first_name = name;
  }
  string get_last_name(){
    return last_name;
  }
  void set_last_name(string name){
    this->last_name = name;
  }
  int get_standard(){
    return standard;
  }
  void set_standard(int standard){
    this->standard = standard;
  }
  string to_string(){
    stringstream s_age,s_standard;
    s_age << age;
    s_standard << standard;
    return s_age.str() + "," + first_name + "," + last_name + "," + s_standard.str();
  }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
