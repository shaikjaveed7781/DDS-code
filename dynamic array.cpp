#include<stdio.h>
#include<stdlib.h>
  int main(){
  int n;
  printf("even size of array :");
  scanf("%d",&n);
  int*arr=(int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++){
    printf("\n enter the element at  arr[%d] index:",i);
    scanf("%d",&arr[i]);
  }
  printf("\n entered element in array :");
  for(int i=0;i<n;i++){
      printf("%d",arr[i]);
  }
  }
