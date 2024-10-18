//Count the number of positions where lowercase follows the uppercase character
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  string a;
  getline(cin,a);
  int len = a.length();
  int count = 0;
  for(int i=0;i<len;i++){
    if((a[i]>='a'&&a[i]<='z')&&(a[i+1]>='A'&&a[i+1]<='Z')){
      count++;
    }
  }
  cout<<count;
  return 0;
}