//Print table of a number x using do while loop
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,mul,i=1;
  cin>>n;
  do{
    mul = n * i;
    cout<<mul<<" ";
    i+=1;
  }while(i<=10);

  return 0;
}