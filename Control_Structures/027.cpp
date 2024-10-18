//Working with Digits
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n,d,s=0,md=0,mnd=9,digit[10]={0};
  cin >> n;
  while (n > 0) {
    d = n % 10;
    s += d;        
    if (d > md){
      md = d;
    }
    if (d < mnd){
      mnd = d;
    } 
    n= n/10;
    digit[d]++;          
  }
  cout << "Sum of digits: " << s << endl;
  cout << "Maximum digit: " << md << endl;
  cout << "Minimum digit: " << mnd << endl;
  cout << "Count of each digit:" << endl;
  for(int i=0;i<=9;i++){
    cout<<i<<": "<<digit[i]<<endl;
  }
  return 0;
}