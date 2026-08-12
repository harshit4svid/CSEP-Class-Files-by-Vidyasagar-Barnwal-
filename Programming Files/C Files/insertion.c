#include<stdio.h>
int main(){
    int  i, pos, value, n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of the Array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        }
    printf("Enter the element that have to be inserted : ");
    scanf("%d", &value);
    printf("Enter the position index where the element is to be inserted : ", n);
    scanf("%d", &pos);

    for(i=n-1; i>=pos; i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    n++;
    printf("Array after insertion: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
} 