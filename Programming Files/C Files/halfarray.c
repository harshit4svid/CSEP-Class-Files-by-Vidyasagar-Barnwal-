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
        printf("Elements of new array is :");
        if(n%2==0){
    for(i=0; i<n/2; i++){
        printf("%d ", arr[i]);
    }
}
    else{
        for(i=0; i<n/2+1; i++){
        printf("%d ", arr[i]);
    }
    }
    return 0;
}
 