//Find the minimum number of moves
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a,b;
  cin>>a>>b;
  int c=abs(a-b);
  if(c>=1&&c<=10){
    cout<<1;
  }else{
    if(c%10==0){
      cout<<c/10;
    }
    else{
      int d = (c/10)+1;
      cout<<d;
    }
  }

  return 0;
}