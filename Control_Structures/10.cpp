//Find whether a given year is leap year or not
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int year;
  cin>>year;
  if (year % 400 == 0) {
    cout<<"leap year";
  }
  else if (year % 100 == 0) {
    cout<<"not leap year";
  }
  else if (year % 4 == 0) {
    cout<<"leap year";
  }
  else {
    cout<<"not leap year";
  }
  return 0;
}