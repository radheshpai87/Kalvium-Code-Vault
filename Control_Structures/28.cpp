//Print the largest and smallest number of Input numbers
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int cnt,a;
  cin>>cnt;
  cin>>a;
  int lrg = a;
  int sml = a;
  for (int i=2;i<=cnt;i++){
    cin>>a;
    if(a>lrg){
      lrg=a;
    }else if(a<sml){
      sml=a;
    }
  }
  cout<<"largest="<<lrg<<endl;
  cout<<"smallest="<<sml;

  return 0;
}