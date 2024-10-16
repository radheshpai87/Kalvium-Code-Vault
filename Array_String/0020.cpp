//Print Yes if # is present in a string otherwise No
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  string a;
  getline(cin,a);
  int len=a.length();
  bool flag = false;
  for(int i=0;i<len;i++){
    if(a[i]=='#'){
      flag = true;
    }
  }
  if(flag){
    cout<<"Yes";
  }else{
    cout<<"No";
  }
  return 0;
}