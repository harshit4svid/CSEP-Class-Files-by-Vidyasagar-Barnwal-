#include<stdio.h>
int main(){
    int i;
    int arr[6]= {2,3,4,6,7,5};
    int largest=arr[0];
    for(i=1;i<6;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);
    return 0;
    }