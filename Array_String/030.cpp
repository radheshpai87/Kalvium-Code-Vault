//UPPERCASE or lowercase in a string
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
  bool flagU = false;
  bool flagL = false;
  for(int i=0;i<len;i++){
    if(isupper(a[i])){
      flagU = true;
    }else if (islower(a[i])){
      flagL = true;
    }
  }
  if(flagU && flagL){
    cout<<"Both";
  }else if(flagU){
    cout<<"U";
  }else if(flagL){
    cout<<"L";
  }
  return 0;
}