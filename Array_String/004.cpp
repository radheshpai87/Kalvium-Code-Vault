//Print the last element of the array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a,num;
  cin>>a;
  int arr[a];
  for(int i=0;i<a;i++){
    cin>>num;
    arr[i]=num;
  }
  cout<<arr[a-1];

  return 0;
}