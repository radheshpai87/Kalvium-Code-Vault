//Remove the special characters in the given string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  string s,n;
  getline(cin,s);
  int len = s.length();
  for(int i=0;i<len;i++){
    if(isalpha(s[i])){
      n+=s[i];
    }
  }
  cout<<n;
  return 0;
}