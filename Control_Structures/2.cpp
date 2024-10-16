//Print True/False based on the character input
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  char a;
  cin>>a;
  if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
    cout<<"True";
  }else{
    cout<<"False";
  }
  return 0;
}