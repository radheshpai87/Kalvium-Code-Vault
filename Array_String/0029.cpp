//Equal number of 0,1 and 2 from the given string
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
  int len = a.length();
  int count0=0,count1=0,count2=0;
  for(int i=0;i<len;i++){
    if(a[i]=='0'){
      count0++;
    }else if(a[i]=='1'){
      count1++;
    }else if(a[i]=='2'){
      count2++;
    }
  }
  if((count0==count1)&&(count1==count2)&&(count0==count2)){
    cout<<"Yes";
  }else{
    cout<<"No";
  }

  return 0;
}