//firts and last occurance of element in array
#include<iostream>
using namespace std;
int first(int arr[],int n,int k){
     int s=0;
     int e=n-1;
     int mid=s+(e-s)/2;
     int ans=-1;
     while(s<=e){
          if(arr[mid]==k){
               ans=mid;
               e=mid-1;
          }
          else if(arr[mid]>k){
               e=mid-1;
          }
          else{
               s=mid+1;
          }
          mid=s+(e-s)/2;
     }
     return ans;
}
int last(int arr[],int n,int k){
     int s=0;
     int e=n-1;
     int mid=s+(e-s)/2;
     int ans=-1;
     while(s<=e){
          if(arr[mid]==k){
               ans=mid;
               s=mid+1;
          }
          else if(arr[mid]>k){
               e=mid-1;
          }
          else{
               s=mid+1;
          }
          mid=s+(e-s)/2;
     }
     return ans;
}
int main(){
int arr[]={1,2,3,3,3,3,3,5,8,4,7,90};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"first occurance of"<<3<<"  is  :"<<first(arr,n,3)<<endl;
cout<<"last occurance of "<<3<<"  is  :" <<last(arr,n,3)<<endl;
}