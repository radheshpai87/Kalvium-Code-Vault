//Sum of extracted digits
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int num1, num2;
  cin>>num1>>num2;
  if (num1<=9 || num2<=9){
    cout<<"Invalid number"<<endl;
  }
  else{
    num1 = num1/10;
    num1 = num1 % 10;
    num2 = num2/10;
    num2 = num2 % 10;
    cout<<num1+num2;
  }
  return 0;
}