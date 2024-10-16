//Print the even elements in an array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int arr[10],num;
  for(int i=0;i<10;i++){
    cin>>num;
    arr[i]=num;
  }
  for(int i=0;i<10;i++){
    if(arr[i]%2==0){
      cout<<arr[i]<<" ";
    }
  }

  return 0;
}