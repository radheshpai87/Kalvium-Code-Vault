//Find whether given year is even or odd
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int year;
  cin>>year;
  if (year % 2 == 0){
    cout<<"even";
  }else{
    cout<<"odd";
  }

  return 0;
}