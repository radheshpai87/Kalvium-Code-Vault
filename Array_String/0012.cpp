//Print sum of elements present at even index
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,sum=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    if(i%2==0){
      sum+=arr[i];
    }
  }
  cout<<sum;

  return 0;
}