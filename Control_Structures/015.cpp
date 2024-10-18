//Divisible by 3 and 5
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int num;
  cin>>num;
  if (num % 3 == 0 && num % 5 == 0 ){
    cout<<"Y";
  }else{
    cout<<"N";
  }

  return 0;
}