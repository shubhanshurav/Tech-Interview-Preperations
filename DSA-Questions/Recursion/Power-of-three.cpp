#include<iostream>
using namespace std;

int isPowerOfThree(int n){
    //Base case
    if(n==1) return true;
    if(n<=0 || n%3 != 0) return false;

    return isPowerOfThree(n/3);

    
}

int main(){
    int n;
    cin>>n;
    cout << isPowerOfThree(n);

    return 0;
}