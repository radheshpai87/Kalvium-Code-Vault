//Perimeter and Area of a Rectangle
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
  float l,b,area,perimeter;
  cin>>l>>b;
  area = l * b;
  perimeter = 2 * (l+b);
  cout << fixed << setprecision(2);
  cout<<"Perimeter: "<<perimeter<<endl;
  cout<<"Area: "<<area<<endl;
  return 0;
}