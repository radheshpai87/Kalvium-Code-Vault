//Multiplication Table from 1 to N using Nested Loops
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
  int cnt,n=1;
  cin>>cnt;
  for(int i=0;i<cnt;i++){
    for(int j=1;j<cnt+1;j++){
      cout<<left << setw(2)<<n*j<<" ";
    }
    n++;
    cout<<endl;
  }

  return 0;
}