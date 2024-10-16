//Print the average of array elements
//Test Cases Passed 7/8
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
  int arr[5];
  float sum=0;
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
  for(int i=0;i<5;i++){
    sum+=arr[i];
  }
  cout<<fixed<<setprecision(1);
  sum=sum/5;
  cout<<sum;
  return 0;
}