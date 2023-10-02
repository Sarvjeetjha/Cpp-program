#include<iostream>
using namespace std;
int main(){
int a,c=0;
cout<<"enter no";
cin>>a;
while(a){
    if(a&1==1){
        c++;
      

            }
    a=a>>1;
}
cout<<c;
    
     return 0;
}