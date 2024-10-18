//Count the Number of Vowels in a String
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
  int count = 0;
  for(int i=0;i<len;i++){
    if((a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')||(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')){
      count++;
    }
  }
  cout<<count;
  return 0;
}