
if(average<arr[i]){
for(i=0; i<n; i++){
    if(arr[i]>average){
        printf("%d ", arr[i]);
    }
}
}
else{
    printf("Invalid Input");

}

return 0;
}