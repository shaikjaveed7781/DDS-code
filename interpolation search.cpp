#include<iostream>
using namespace std;
int interpolationSearch(int arr[],int n,int key){
    int low=0,high=n-1;
    while(low<=high && key>=arr[low] && key<=arr[high]){
        int pos=low+((key-arr[low])*(high-low))/(arr[high]-arr[low]);
        if(arr[pos]==key)
        return pos;
        else if(arr[pos]<key)
        low=pos+1;
        else
        high=pos-1;
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70};

    int n=sizeof(arr)/sizeof(arr[0]);
    int key=70;
    int result = interpolationSearch(arr,n,key);
    if(result!=-1)
    cout<<"Element found at index"<<result<<endl;
else
cout<<"element not found"<<endl;
return 0;
    
}
