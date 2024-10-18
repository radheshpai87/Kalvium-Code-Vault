//Print the factors of a given number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a;
  cin>>a;
  for(int i=1;i<=a;i++){
    if(a%i==0){
      cout<<i<<",";
    }
  }

  return 0;
}