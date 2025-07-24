#include<iostream>
using namespace std;
#define size 6
int stack[size];
int top=-1;
void push(int num){
    top++;
    if(top<size-1){
        stack[top]=num;
        cout<<num<<"  inserted sucessfully  "<<endl;
    }else{
        cout<<" stack is overflow "<<endl;
    }
}
void pop(){
    if(top==-1){
        cout<<"  stack is underflow"<<endl;
        
    }else{
        cout<<stack[top]<<"  removed "<<endl;
        top--;
    }
    
}
void display(){
    if(top==-1){
        cout<<"stack is empty can't display"<<endl;
    }else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
    }
}
int main() {
    push(10);
    push(5);
    push(6);
    push(8);
    pop();
    pop();
    push(16);
    push(12);
    display();
}
 
