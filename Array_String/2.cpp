//Print the elements of array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a,arr[100],num;
  cin>>a;
  for(int i=0;i<a;i++){
    cin>>num;
    arr[i]=num;
  }
  for(int i=0;i<a;i++){
    cout<<arr[i]<<",";
  }

  return 0;
}