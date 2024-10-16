//Print the odd number series upto N terms
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int num = 1+(2*i);
    cout<<num<<" ";
  }

  return 0;
}