//Introduction to Strings
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
  cout<<"String: "<<a<<endl;
  cout<<"Length: "<<len;

  return 0;
}