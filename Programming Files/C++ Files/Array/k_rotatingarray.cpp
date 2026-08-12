#include<iostream>
using namespace std;
int main(){
    int i, n, k;
    cout<<endl<<endl<<"Enter the length of the array : ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter the elements of the array : ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<endl<<"The array is : ";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    cout<<endl<<endl<<"Enter the value of k: ";
    cin>>k;
    int temp[k];
    for(i=0; i<k; i++){
    temp[i]=a[n-1-i];
    }
    for(i=n-1; i>=0; i--){
    a[i+k]=a[i];
    }
    for(i=0; i<k; i++){
    a[k-1-i]=temp[i];
    }
    cout<<endl<<"New array : ";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl<<endl;
    return 0;
} 