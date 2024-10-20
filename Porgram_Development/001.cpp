//Program Development
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//used a function to do the computation
//same can be done in main function
int sumsq(int n){
    int exp=0,d=0,sum=0;
    exp = pow(2,n);
    while(exp>0){
        d = exp%10;
        exp = exp/10;
        sum += d;
    }
    return sum;
}

int main(){
    int num;
    cin>>num;
    if(num<=0){
        cout<<-1;
    }else{
        cout<<sumsq(num);
    }
}