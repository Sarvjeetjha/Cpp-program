//to print duplicate element in aray if elemnt of array is sorted array of N element having elemnt from 1 to N-1;
#include<iostream>
using namespace std;
int main(){
int arr[10];
cout<<"enter elemnt on array";
for (int i = 0; i < 10; i++)
{
    cin>>arr[i];
}
//method :- 1**************************************
/*int sum1=0,sum2=0;
for (int i = 0; i < 10; i++)
{
    sum1+=arr[i];
}
for (int i = 0; i < 10; i++)
{
    sum2+=i;
}
cout<<"duplicate elment in array is : "<<(sum1-sum2);*/

//using XOR operetor 
int ans=0;
for (int i = 0; i < 10; i++)
{
    ans^=arr[i];}
for (int i = 1; i < 10; i++)
{
    ans^=i;
}
cout<<"duplicate elment in array is : "<<ans;







    
     return 0;
}