//Take Input of string name, age and Print Output
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  string name;
  int age;
  getline(cin,name);
  cin>>age;
  cout<<"My name is "<<name<<" and my age is "<<age<<" years.";
  return 0;
}