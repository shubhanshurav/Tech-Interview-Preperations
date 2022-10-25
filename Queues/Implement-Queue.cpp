#include<iostream>
#include<queue>
using namespace std;

class Queue{
  
    int size;

    int *arr;

    int qfront;

    int qrear;

  public:
  Queue(){
     size = 100;
     arr = new int[size];
     qfront = qrear = 0;
  }


    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == 0 || qrear == 0){
            return true;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(qrear == size){
            return;
        }else{
            arr[qrear] = data;
            qrear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront = qrear){
           return -1;
        }else{
           arr[qfront] = -1;
           qfront++;
           if(qfront  == qrear){
             qfront = qrear = 0;
           } 
        }      
    }
  

    int front() {
        // Implement the front() function
        if(qfront == qrear){
            return -1;
        }

        return arr[qfront];
        
    }

};

