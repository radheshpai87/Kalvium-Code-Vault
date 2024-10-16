//Compare the two strings
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  string a,b;
  getline(cin,a);
  getline(cin,b);
  if (a == b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

  return 0;
}