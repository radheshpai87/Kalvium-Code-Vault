//Count the Even and Odd Numbers in an Array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,cnte=0,cnto=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      cnte++;
    }else{
      cnto++;
    }
  }
  cout<<cnte<<endl;
  cout<<cnto<<endl;

  return 0;
}