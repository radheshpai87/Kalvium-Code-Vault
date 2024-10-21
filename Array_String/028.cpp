//Remove b and ac from a given string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  string a,ans;
  getline(cin,a);
  int len = a.length();
  for(int i=0; i<len;i++){
    if(a[i] == 'b'){
      a[i]='#';
    }else if(a[i]=='a' && a[i+1]=='c'){
      a[i]='#';
      a[i+1]='#';
    }
  }
  for(int i=0;i<len;i++){
    if(a[i]!='#'){
      ans += a[i];
    }
  }
  cout<<ans;
  return 0;
}