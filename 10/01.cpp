//to swqap alternate no
#include<iostream>
using namespace std;
int main(){
int arr[100];
cout<<"no of element you want to store";
int n;
cin>>n;
cout<<"enter elemnt in array";
for(int i=0;i<n;i++){
     cin>>arr[i];
}/*
for(int i=0;i<n;i+=2){
    if(i+1<n)
        swap(arr[i],arr[i+1]);
    }*/
if (n&1)                                
    for(int i=0;i<n-2;i+=2){
        swap(arr[i],arr[i+1]);
    }
else {
     for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    
     return 0;
}