//Print all vowels
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  string s;
  getline(cin,s);
  int l = s.length();
  for(int i=0;i<l;i++){
    if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i]=='u'){
      cout<<s[i];
    }
  }
  return 0;
}