#include <iostream>
using namespace std;
int main() {
    int arr[]={10,5,30,2,4,15};
    int minIndex=0;
    int min=arr[0];
    for(int i=1;i<6;i++){
        
    if(arr[i]<min){
        min=arr[i];
        minIndex=i;
    }
       
    
    
    
}
    cout<<min<<endl;
    cout<<minIndex;
    return 0;

}
