#include<iostream>
using namespace std;
int main(){
    int i, n, temp;
    cout<<"Enter the length of the array :";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array :";
    for(i=0; i<n; i++){
    cin>>a[i];
    }
    temp = a[n-1];
    for(i=n-1; i>=0; i--){
        a[i+1]=a[i];

    }
    cout<<"The array is ";
    cout<<endl;
    a[0]=temp;
    
    cout<<"New array : ";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
} 