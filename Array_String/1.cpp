//Introduction to Arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a,num,arr[100];
  cin>>a;
  for(int i=0;i<a;i++){
    cin>>num;
    arr[i]=num;
  }
  for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}