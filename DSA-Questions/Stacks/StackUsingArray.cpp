#include<climits>  //For using INT_MIN
#include<iostream>
using namespace std;

class StackUsingArray{
    
    //Create dynamic array as Private
    int *data;
    int nextIndex;
    int capacity;

    public:
        //Create constructor
        StackUsingArray(int totalSize){
            data = new int[totalSize];   //give array size
            nextIndex = 0;
            capacity = totalSize;
        }

   //return the no. of elements presents in my stacks
     int size(){
        return nextIndex; //return size of stack
     }

     bool isEmpty(){
        /*
        if(nextIndex == 0) //Condition for check stack is empty or not
           return true;
        else
           return false;   

        */

       // we can write as in Short form of above code
       return nextIndex == 0;  // 0 == 0 --> true & 2==0 --> false
     }

     // Insert an Element
     void push(int element){
        if(nextIndex == capacity){
            cout << "Stack Full" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
     }

     // Delete an Element 
     int pop(){
        if(isEmpty){
            cout << "Stack is empty"<< endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
     }

     // Find Topmost Element
     int top(){
        if(isEmpty){
            cout << "Stack is empty"<< endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
     }
     
};