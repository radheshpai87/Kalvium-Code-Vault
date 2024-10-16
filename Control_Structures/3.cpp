//Greater among extracted digits post decimal point
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  float num1,num2;
  cin>>num1>>num2;
  int n = num1 * 10;
  n = floor(n);
  n = n % 10;
  int m = num2 * 10;
  m = floor(m);
  m = m % 10;
  if (n>m){
    cout<<n;
  }else if (m>n){
    cout<<m;
  }else{
    cout<<"The numbers are equal";
  }
  return 0;
}