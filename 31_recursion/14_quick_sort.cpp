#include<iostream>
using namespace std;
//partition function for partition 
int partition(int*arr,int si,int pivot){//pivot is last index
    int j=si-1;
    for(int i=si;i<pivot;i++){
        if(arr[i]<arr[pivot]){
            j++;
            swap(arr[i],arr[j]);
        }
    }
    j++;
    swap(arr[j],arr[pivot]);
    return j;k
}
//quicksort function 
void quicksort(int*arr,int si,int ei){
    if(si>=ei){
        return;
    }
    else{
    int pvtindex=partition(arr,si,ei);
    quicksort(arr,si,pvtindex-1);//for laft of pivot   elemnt
    quicksort(arr,pvtindex+1,ei);//for right of pivot elemnt
    }
}
int main(){
int arr[]={6,5,4,3,2,1};
int si=0;
int ei=5;
quicksort(arr,si,ei);
for (int i=0;i<=ei;i++){
    cout<<arr[i]<<" ";
}
    
     return 0;
}