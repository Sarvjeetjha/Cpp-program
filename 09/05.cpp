//linear search
#include<iostream>
using namespace std;
int search(int arr[],int n,int s){
    for(int i=0;i<n;i++){
    if(arr[i]==s)
        return 1;}
    return 0;




}
int main(){
int arr[10000],n,s;
cout<<"enter no of elemnt you want to enter"<<endl;
cin>>n;
cout<<"enter no to find"<<endl;
cin>>s;
cout<<"taking input elememt"<<endl;
for(int i=0;i<n;i++){
     cin>>arr[i];
}
if(search(arr,n,s))
    cout<<"found";
else
    cout<<"not found";
    
     return 0;
}