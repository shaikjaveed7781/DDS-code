#include<iostream>
using namespace std;
int fib(int num){
    if(num==0){
        return 0;
        }
        if(num==1){
            return 1;
        }else{
            return fib(num-1)+fib(num-2);
        
    }
}
int main(){
    int n;
    cout<<"Enter a NUmber :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
}
