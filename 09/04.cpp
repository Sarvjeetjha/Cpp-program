//printing sum of all element of an array
#include<iostream>
using namespace std;
int main(){
int arr[10],sum=0;
cout<<"taking input elememt"<<endl;
for(int i=0;i<10;i++){
     cin>>arr[i];
}
for(int i=0;i<10;i++){
     sum+=arr[i];
}
cout<<"sum of all elemnt of arra is "<<sum;
    
     return 0;
}