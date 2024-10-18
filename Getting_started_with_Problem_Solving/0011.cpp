//Swapping two variables
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a,b;
  cin>>a>>b;
  a = a+b;
  b = a-b;
  a=a-b;
  cout<<"After swapping: a = "<<a<<", b = "<<b;

  return 0;
}