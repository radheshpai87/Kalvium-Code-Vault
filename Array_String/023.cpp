//Find substring from given string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a,b;
  string s;
  cin>>s;
  cin>>a>>b;
  for(int i=a;i<a+b;i++){
    cout<<s[i];
  }

  return 0;
}
