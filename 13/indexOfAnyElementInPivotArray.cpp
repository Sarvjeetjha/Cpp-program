//index Of Any Element In Pivot Array
#include<iostream>

using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    mid=s+(e-s)/2;
    }
    return s;
}
int binarysearch(int arr[],int n,int s,int e,int k){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else
            start=mid+1;
        mid=start+(end-start)/2;
}
    }
    
int main(){
    int k;
    cout<<"enter elemnt to search "<<endl;
    cin>>k;
    int arr[]={5,6,8,9,10,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int piv=pivot(arr,n);
    if(k>=arr[piv] && k<=arr[n-1]){
        cout<<binarysearch(arr,n,piv,n-1,k)<<endl;

    }
    else if(k<=arr[piv-1] && k>=arr[0]){
        int result=binarysearch(arr,n,0,piv-1,k);
        cout<<result<<endl;
    }
    else{
        cout<<-1<<endl;
    }



    
    
}