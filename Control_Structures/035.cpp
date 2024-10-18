//Pattern printing-2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  char alpha;
  cin>>alpha;
  int n=alpha-'A'+1;
  char strtltr = 'A';
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<strtltr<<" ";
    }
    strtltr++;
    cout<<endl;
  }

  return 0;
}