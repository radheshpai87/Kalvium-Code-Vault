//Operators 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a,b;
  int bitwiseleft,bitwiseright;
  cin>>a>>b;
  cout<<"Arithmetic Operations: "<<endl;
  cout<<"Sum: "<<a+b<<endl;
  cout<<"Difference: "<<a-b<<endl;
  cout<<"Product: "<<a*b<<endl;
  if (b == 0){
    cout<<"Quotient: Division by zero is not allowed"<<endl;
    cout<<"Remainder: Division by zero is not allowed"<<endl;
  }
  else{
    cout<<"Quotient: "<<a/b<<endl;
    cout<<"Remainder: "<<a%b<<endl;
  }
  cout<<"Increment and Decrement Operations: "<<endl;
  cout<<"Incremented first integer: "<<++a<<endl;
  cout<<"Decremented second integer: "<<--b<<endl;
  cout<<"Compound Assignment Operations: "<<endl;
  int c = a+=b;
  int d = a-=b;
  int e = a*=b;
  cout<<"After += operation: "<<c<<endl;
  cout<<"After -= operation: "<<d<<endl;
  cout<<"After *= operation: "<<e<<endl;
  cout<<"Bitwise Shift Operations: "<<endl;
  bitwiseleft = a<<1;
  bitwiseright = b>>1;
  cout<<"First integer left shifted by 1: "<<bitwiseleft<<endl;
  cout<<"Second integer right shifted by 1: "<<bitwiseright<<endl;
  return 0;
}