//Print N/P based on the temperature
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int temp;
  cin>>temp;
  if (temp >= 0){
    cout<<"P";
  }else{
    cout<<"N";
  }
  return 0;
}