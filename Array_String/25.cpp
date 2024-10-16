//Count the special characters in a given string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  string a;
  int count=0;
  getline(cin,a);
  int len = a.length();
  for(int i=0;i<len;i++){
    if(!isalpha(a[i])){
      count++;
    }
  }
  cout<<count;

  return 0;
}