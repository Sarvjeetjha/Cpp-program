//to_check_that_array_is_sorted_or_not
#include<iostream>
#include<array>
using namespace std;
bool arrsort(int arr[],int size){
    if(size==0 ||size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else    
        return arrsort(arr+1,size-1);
}
int main(){
int arr[]={2,5,6,9,9,20,10};
int size=7;
bool ans = arrsort(arr,size);
if(ans)
    cout<<"array is sorted"<<endl;
else    
    cout<<"array is not sorted"<<endl;
    
     return 0;
}


