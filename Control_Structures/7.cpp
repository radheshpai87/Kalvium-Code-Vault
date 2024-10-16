//Print greatest of two numbers
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int num1, num2;
  cin>>num1>>num2;
  if (num1>num2){
    cout<<num1;
  }else{
    cout<<num2;
  }
  return 0;
}