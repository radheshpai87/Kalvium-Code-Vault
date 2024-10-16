//Print "E" for even and "O" for odd
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  bool flag = false;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      flag = true;
    }
  }
  if(flag==true){
    cout<<"E";
  }else{
    cout<<"O";
  }
  return 0;
}