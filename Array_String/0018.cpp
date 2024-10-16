//Concatenate and compare with the given string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  string a,b,c;
  cin>>a>>b;
  cin>>c;
  string d = a+b;
  if(d == c){
    cout<<"yes";
  }else{
    cout<<"no";
  }

  return 0;
}