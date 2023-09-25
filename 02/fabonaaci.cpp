#include<iostream>
using namespace std;
int main(){
int n,a=0,b=1;
cout<<"enter no of term to which you want fibbonacci series";
cin>>n;
if(n==1){
    cout<<a;
}
else if(n==2){
cout<<a<<"\t"<<b;
}
else{
    cout<<a<<"\t"<<b<<"\t";
    for(int i=3;i<=n;i++){
        int c=a+b;
         cout<<c<<"\t";
        a=b;
        b=c;
       
    }
}
    
     return 0;
}