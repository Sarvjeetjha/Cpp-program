//to print array using function
#include<iostream>
using namespace std;
void printArr(int *arr,int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main(){
int arr[10];
cout<<"taking input elememt"<<endl;
for(int i=0;i<10;i++){
     cin>>arr[i];
}
cout<<"printing elements from array"<<endl;
printArr(arr,10);
    
     return 0;
}