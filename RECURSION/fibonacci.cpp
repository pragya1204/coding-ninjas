#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int fibonacciNumber(int n){
    if(n==0) return 0;
    if(n==1) return 1;
         
    return fibonacciNumber(n-1)+fibonacciNumber(n-2);
}
int main(){
    cout<<fibonacciNumber(7);
    return 0;
}




