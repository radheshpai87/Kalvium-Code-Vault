//Stop not until you get 1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,grt=0,sml=0;
  cin>>n;
  grt = n;
  sml = n;
  do{
    cin>>n;
    if(grt<n){
      grt = n;
    }else if(sml>n){
      sml = n;
    }
  }while(n!=1);
  cout<<grt<<" "<<sml;

  return 0;
}