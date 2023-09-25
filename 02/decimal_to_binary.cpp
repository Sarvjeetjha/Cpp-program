#include<iostream>
#include<math.h>
using namespace std;
int main(){
     int n,i=0,ans=0;
     cout<<"enter number";
     cin>>n;
     while(n){
          int bit=n & 1;                    //program is right but it's not working in this compilor
          ans=(bit*pow(10,i))+ans;
          n=n>>1;
          i++;


          
     }
     cout<<"number in binary is"<<ans;


    
     return 0;
}