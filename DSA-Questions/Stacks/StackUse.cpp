#include<iostream>
#include "StackUsingArray.cpp"
using namespace std;

int main(){
    StackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top()<< endl;  //top: 40

    cout << s.pop() << endl;  // delete: 40
    cout << s.pop() << endl;  // delete: 30
    cout << s.pop() << endl;  // delete: 20

    cout << s.size() << endl;  // size: 1

    cout << s.isEmpty() << endl; // false: 0

}