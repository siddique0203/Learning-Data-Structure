#include<iostream>
using namespace std;

    const int size=5;
class queue{
public:
    int arr[size];
    int front=-1;
    int rear=-1;

  bool isEmpty(){
     return(front==-1 && rear==-1);
    }

  bool isFull(){
     return (rear==(size-1));
    }

  void enqueue(int x){
      if(isFull()){
        cout<<"Queue is full"<<endl;
      }

      else if(isEmpty()){
        front=rear=0;
        arr[rear]=x;
      }
      else{
        arr[++rear]=x;
      }

  }

  void dequeue(){
      if(isEmpty()){
        cout<<"Queue is empty"<<endl;
      }
      else if(front==rear){
        front=rear=-1;
      }
      else{
        front++;
      }
  }

  void frontElement(){
    cout<<"Front element is: "<<arr[front]<<endl;
  }

  void showQueue(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i=front; i<=rear; i++){
            cout<<arr[i]<<"  ";
        }cout<<endl;
    }

  }

};

int main(){


    queue q;
    q.enqueue(9);
    q.enqueue(0);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(2);
    q.enqueue(4);
    q.showQueue();
    q.dequeue();
    q.showQueue();
    q.dequeue();
    q.showQueue();
    q.dequeue();
    q.showQueue();
    q.dequeue();
    q.showQueue();
    q.dequeue();
    q.showQueue();






}
