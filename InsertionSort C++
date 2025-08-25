#include <iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp){
         arr[j+1]=arr[j];
         j--;
        }
        arr[j+1]=temp;
    }
}
int main() {
int arr[]={10,7,3,5,9};
int n=sizeof(arr)/sizeof(arr[0]);
insertionsort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    
}
