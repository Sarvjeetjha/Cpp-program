#include<iostream>
#include<array>
using namespace std;
int binary_search(int *arr,int s,int e,int search){
    if(s>e)
        return -1 ;//false
    else{
        int mid=(s+e)/2;
        if(arr[mid]==search){
            return mid;//true
        }
        if(arr[mid]>search){
           return binary_search(arr,s,mid-1,search);
        }
        else{
            return binary_search(arr,mid+1,e,search);

        }
    }
}
int main(){
int a[]={1,2,3,4,5,6,7,8};
int i=binary_search(a,0,8,4); 
cout<<i<<endl;
// if(i)// for bool function
//     cout<<"found"<<endl;
// else  
//     cout<<"not found"<<endl;


    
//      return 0;
}