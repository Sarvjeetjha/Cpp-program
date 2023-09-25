//reverse of an array
#include<iostream>
using namespace std;
int main(){
    int start=0;
    int end=9;

int arr[10];
//taking input element in array
for(int i=0;i<10;i++){
     cin>>arr[i];
}
while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;}
    for(int i=0;i<10;i++){
    cout<<arr[i]<<" " ;
}
    
     return 0;
}