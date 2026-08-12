#include<stdio.h>
int main(){
    int i,n, ascending=1, decending=1;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of the Array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n-1; i++){
        if(arr[i]> arr[i+1]){
            ascending--;
        }
    }
    for(i=0; i<n-1; i++){
        if(arr[i]< arr[i+1]){
          decending--;
        }
    }
        if(ascending==1){
            printf("Array is Sorted in Ascending Order!!");
        }
        else if(decending==1){
            printf("Array is Sorted in Descending Order!!");
        }
        else {
            printf("Array is not Sorted!!");
        }
    return 0;
    }

