#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person{
protected:
  string name;
  int age;
  int cur_id;
public:
  virtual void getdata() = 0;
  virtual void putdata() = 0;
};

class Professor : public Person{
private:  
  int publications;
public:
  static int n_professors;
  void getdata();
  void putdata();
  Professor();
};

Professor::Professor(){
  this->cur_id = Professor::n_professors;
  Professor::n_professors++;
}

void Professor::getdata(){
  string name;
  int age, pubs;
  cin >> name >> age >> pubs;
  this->name = name;
  this->age = age;
  this->publications = pubs;
}

void Professor::putdata(){
  cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << endl;
}

int Professor::n_professors = 1;

class Student : public Person{
private:
  int marks[6];
public:
  static int n_students;
  void getdata();
  void putdata();
  Student();
};

Student::Student(){
  this->cur_id = Student::n_students;
  Student::n_students++;
}
void Student::getdata(){
  string name;
  int age;
  int marks[6];
  cin >> name >> age; 
  this->name = name;
  this->age = age;
  for(int i = 0; i < 6; i++){
    cin >> marks[i];
    this->marks[i] = marks[i];
  }
}
void Student::putdata(){
  int sum = 0;
  for(int i = 0 ;i < 6; i++){
    sum += this->marks[i];
  }
  cout << this->name << " " << this->age << " " << sum << " " << this->cur_id << endl; 
}
int Student::n_students = 1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];
    
    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
    
}
