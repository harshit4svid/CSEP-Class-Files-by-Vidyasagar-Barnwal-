#include<stdio.h>
#include<limits.h> // Required for INT_MIN

int main(){
    int i,n;
    int largest=1, secondLargest=0;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of the Array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        }
   
    for(i=0; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    printf("The second largest element in the array is: %d\n", secondLargest);
    return 0;
}