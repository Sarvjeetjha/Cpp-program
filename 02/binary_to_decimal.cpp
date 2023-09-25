#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n,i=0,ans=0;
cout<<"enter no";
cin>>n;
while(n){
    int bit=n%10;
    if(bit==1){
        ans=ans + pow(2,i);
      
    }
      i++;
    


    n=n/10;

}
cout<<"no in decimal is : "<<ans;
    
     return 0;
}