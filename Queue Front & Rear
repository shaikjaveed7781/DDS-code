#include<iostream>
using namespace std;
#define size 4
int queue[size];
int front=-1,rear=-1;
void enqueue(int num){
    if(front==0 && rear==size-1 || (rear+1)%size==front){
        cout<<"Queue is full can not insert\n";
    }else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=num;
        cout<<num<<"insertd"<<endl;
    }else{
        rear=(rear+1)%size;
        queue[rear]=num;
        cout<<num<<"inserted"<<endl;
    }
}
int main(){
  enqueue(10);
    enqueue(20);
      enqueue(30);
        enqueue(40);
          enqueue(50);
}
