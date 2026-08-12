#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of the Array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        arr[i]=arr[i]+2;
    }
    printf("Elements of new array is :");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
