#include<stdio.h>
int main(){
    int  i, pos, n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of the Array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        }
    printf("Enter the element position that have to be deleted : ");
    scanf("%d", &pos);
    for(i=pos-1; i<n; i++){
        arr[i]=arr[i+1];
        }
        n--;
        printf("The Elements of the new array are :");
        for(i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        return 0;
    }
