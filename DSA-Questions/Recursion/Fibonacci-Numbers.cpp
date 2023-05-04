#include<iostream>
using namespace std;


int fib(int n){
    
    //base case
    if(n==0) return 0;
    if(n==1) return 1;

    //recursive relation
    return fib(n-1)+fib(n-2);
}

int main(){

    cout << fib(9);

    return 0;
}