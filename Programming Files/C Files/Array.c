#include<stdio.h>
int main(){
    int i;
    int arr[6]= {2,3,4,6,7,5};
    int sum = 0;
    int product =1;
    for(i=0;i<=5;i++){
        if(i%2==0)
            sum=sum+arr[i];
        else
            product=product*arr[i];
        }
    printf("Sum of Even indexed = %d\n", sum);
    printf("Product of Odd indexed = %d", product);
    return 0;
    }
