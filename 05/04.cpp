//decimal to  binary   correct code
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,ans=0;
cout<<"enter no ";
cin>>a ;
while(a){
    int n=a&1;
    ans=ans*10+n;
    a=a>>1;
}
   
cout<<ans<<endl;}