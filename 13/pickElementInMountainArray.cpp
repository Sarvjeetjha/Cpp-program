//pick element in mountain  array
#include<iostream>
using namespace std;
int pick(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<e){
        //     ans=arr[mid];
        // }
        if(arr[mid]<arr[mid+1]){
            s=mid+1;

        }
        else{
            e=mid;
        }
         mid=s+(e-s)/2;
    }
    return arr[s];
}
int main(){
    int arr[]={5,6,7,8,9,15,18,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< pick(arr,n)<<endl;
     
}