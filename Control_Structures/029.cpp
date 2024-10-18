//Sum square difference
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int cnt,sq=0,sqsm=0,smsq=0,sum=0;
  cin>>cnt;
  for(int i=1;i<=cnt;i++){
    sq=i*i;
    smsq+=sq;
    sum+=i;
  }
  sqsm = sum*sum;
  int diff = abs(sqsm-smsq);
  cout<<diff;
  return 0;
}