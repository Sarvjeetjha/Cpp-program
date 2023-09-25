//binary to decimal 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,ans=0,c=0;
cout<<"enter no in binary no ";
cin>>a ;
while(a){
    int r=a%10;
    ans=ans + r*pow(2,c);
    c++;
    a=a/10;
    }
cout<<ans;

}
   