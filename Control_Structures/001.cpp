//Introduction to Control Structures
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int age;
  cin>>age;
  age = abs(age);
  if (age >= 21){
    cout<<"Legal";
  }else{
    cout<<"Not legal";
  }
  return 0;
}