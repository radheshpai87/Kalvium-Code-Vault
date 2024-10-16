//Count all Hashes
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  string a;
  getline(cin,a);
  int len=a.length(),count=0;
  bool flag = false;
  for(int i=0;i<len;i++){
    if(a[i]=='#'){
      count++;
    }
  }
  cout<<count;

  return 0;
}