//Find the sum of n terms
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  long int sum=0;
  cin>>n;
  for(int i=1;i<=n;i++){
    sum+=i;
  }
  cout<<sum;
  return 0;
}