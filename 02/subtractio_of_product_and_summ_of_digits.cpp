#include<iostream>
using namespace std;
int main(){
int a,sum=0,prd=1;
cout<<"enter no";
cin>>a;
while(a!=0){
int r=a%10;
sum=sum+r;
prd=prd*r;
a=a/10;
}
int ans=prd-sum;
cout<<"answer is  :"<<ans;

    
     return 0;
}