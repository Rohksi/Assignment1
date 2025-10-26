#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0, j=n-1;
    while(i<n/2){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}