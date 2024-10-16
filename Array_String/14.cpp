//Swap the first and the last element mutually in the array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,temp=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  temp=arr[0];
  arr[0]=arr[n-1];
  arr[n-1]=temp;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}