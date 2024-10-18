//Insert Space in the given string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  string a,answer;
  getline(cin,a);
  int len = a.length();
  for(int i=0;i<len;i++){
    if((a[i]>='a' && a[i]<='z')&&(a[i+1]>='A' && a[i+1]<='Z')){
      a.insert(i+1," ");
      len++;
      i++;
    }
  }
  cout<<a;
  return 0;
}