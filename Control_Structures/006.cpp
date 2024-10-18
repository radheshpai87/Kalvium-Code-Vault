//Print P/F based on the input
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int marks;
  cin>>marks;
  if (marks > 40){
    cout<<"P";
  }else{
    cout<<"F";
  }
  return 0;
}