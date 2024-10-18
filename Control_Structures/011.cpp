//Print grade based on scores
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int grade;
  cin>>grade;
  if (grade>=0 && grade<=39){
    cout<<"F";
  }
  else if (grade>=40 && grade<=50){
    cout<<"D";
  }
  else if (grade>=51 && grade<=60){
    cout<<"C";
  }
  else if (grade>=61 && grade<=70){
    cout<<"B";
  }
  else if (grade>=71 && grade<=80){
    cout<<"A";
  }
  else if (grade>=81 && grade<=100){
    cout<<"S";
  }
  else{
    cout<<"Invalid input";
  }
  return 0;
}