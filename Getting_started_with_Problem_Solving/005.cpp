//Extract 2nd last digit
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int num;
  cin>>num;
  if (num<=9){
    cout<<"Invalid number";
  }
  else{
    num = num/10;
    num = num % 10;
    cout<<num;
  }
  return 0;
}