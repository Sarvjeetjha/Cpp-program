//to_print_sum_of_integer_using_recursion_of_a_given_no
//library include
#include<iostream>
using namespace std;
//recursive function to return sum of digit
// int sumOfDigit(int n){
//     if(n%10==n)
//         return n;
//     else{
//         int digit=n%10;
//         n=n/10;
//         return digit+sumOfDigit(n);
//     }
// }


//if values are stored in array
int sumOfDigit(int *array,int size){
    if(size==0)
        return 0;
    if(size==1)
        return array[0];
    else{
        
        return array[0]+sumOfDigit(array+1,size-1);
    }
}
int main(){
cout<<"enter no"<<endl;
int arr[]={1,2,3,4,5,6,7};
int size=7;
cout<<"sum of digits of array is "<<sumOfDigit(arr,size)<<endl;
// int a;
// cin>>a;
// cout<<"sum of digits of " <<a<<" is "<<sumOfDigit(a)<<endl;
    
     return 0;
}
