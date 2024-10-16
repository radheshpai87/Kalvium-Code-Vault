//Temperature state message
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int temp;
  cin>>temp;
  if (temp<0){
    cout<<"Freezing weather";
  }else if (temp>0 && temp<=10){
    cout<<"Very cold weather";
  }else if(temp>10 && temp<=20){
    cout<<"Cold weather";
  }else if(temp>20 && temp<=30){
    cout<<"Normal in temp";
  }else if(temp>30 && temp<40){
    cout<<"It's hot";
  }else if(temp>=40){
    cout<<"It's very hot";
  }

  return 0;
}