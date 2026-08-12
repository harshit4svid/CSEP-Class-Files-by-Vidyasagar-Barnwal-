#include <stdio.h>

int main() {
    int a[100], b[100], n, m=0, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Duplicate elements array: ");
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (a[i] == a[j]){
                printf("%d ", a[i]);
                b[i]=a[i];
                
            }
    }
}
    return 0;
}
