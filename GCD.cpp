#include<iostream>
using namespace std;
int GCD(int a, int b){
    if(b==0){
        return a;
    }else{
        return GCD(b,a%b);
    }
}
int main(){
    int  ans=GCD(12,18);
    cout<<ans;
}
