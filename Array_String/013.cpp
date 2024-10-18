//Swap the largest and smallest element from the array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,li=0,si=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    if(arr[i]>arr[li]){
      li = i;
    }else if(arr[i]<arr[si]){
      si = i;
    }
  }
  swap(arr[si],arr[li]);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}