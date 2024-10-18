//Fizz buzz
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a;
  cin>>a;
  if (a>0 and a<=100){
    for(int i=1;i<=a;i++){
    if(i%3==0 && i%5==0){
      cout<<"FizzBuzz ";
    }else if(i%3==0){
      cout<<"Fizz ";
    }else if (i%5==0){
      cout<<"Buzz ";
    }else{
      cout<<i<<" ";
    }
  }
}else{
  cout<<-1;
}
  return 0;
}