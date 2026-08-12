#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j, n;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){ 
    scanf("%d ", &a[i]);
    }
    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(a[j]>a[i]){
            printf("%d", a[j]);
            
            }
        }
    }  
    return 0;
}

