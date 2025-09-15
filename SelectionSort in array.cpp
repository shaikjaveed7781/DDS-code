#include <iostream>
using namespace std;
void selectionsort (int arr[],int size){
    for(int i=0;i<size;i++){
        int minIndex=0;
        int minvalue=arr[i];
        for(int j=i+1;j<size;j++){
            if(arr[j]<minvalue){
                minvalue=arr[j];
                minIndex=j;
            }
        }
        if(minIndex!=0){
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
}
int main() {
    int arr[]={10,5,15,2,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,length);
    cout<<"array after sorting:";
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
