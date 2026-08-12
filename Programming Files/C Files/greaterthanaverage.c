#include<stdio.h>
int main(){
    int i, n;
    float average, sum;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of the Array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
for(i=0; i<n; i++){
    sum=sum+arr[i];
}
average=sum/n;
printf("Elements Greater than Average are : ");

for(i=0; i<n; i++){
    if(arr[i]>average){
        printf("%d ", arr[i]);
    }

}
return 0;
}