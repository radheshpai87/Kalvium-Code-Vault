//Print the 4th letter of the given name
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  string name;
  getline(cin, name);
  cout << name[3];
  return 0;
}