//Number letter Counts
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int nlc(int n){
  int d,count=0;
  while(n>0){
    d = n%10;
    n = n/10;
    if(d==1||d==2||d==6){
      count+=3;
    }else if(d==0||d==4||d==5||d==9){
      count+=4;
    }else if(d==3||d==7||d==8){
      count+=5;
    }
  }
  return count;
}

int main() {
  int num;
  cin>>num;
  cout<<nlc(num);
  return 0;
}