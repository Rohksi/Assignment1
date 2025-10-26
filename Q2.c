#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,2,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int brr[7];
    int i = 0, j, index = 0;

    while(i < n) {
        for(j = 0; j < index; j++)
            if(arr[i] == brr[j]) break;
        
        if(j == index) 
            brr[index++] = arr[i];
        
        i++;
    }

    for(i = 0; i < index; i++)
        printf("%d ", brr[i]);
    
    return 0;
}