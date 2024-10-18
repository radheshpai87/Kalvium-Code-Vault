//Extract the first digit post decimal point
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  float num;
  cin>>num;
  int n = num * 10;
  n = n % 10;
  cout<<n;
  return 0;
}