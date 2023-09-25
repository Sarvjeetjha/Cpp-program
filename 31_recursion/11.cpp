//bubble sort using recursion
#include<iostream>
using namespace std;
void bubblesort(int *arr,int n){
    if(n==0)
        return;
    if(n==1)
        return ;
    for(int i=0;i<n-1;i++ ){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    bubblesort(arr,n-1);
}
int main(){
int arr[]={2,1,6,5,4,9,8,7};
bubblesort(arr,8);
for (int i=0;i<8;i++)
    cout<<arr[i]<<" ";
     return 0;
}