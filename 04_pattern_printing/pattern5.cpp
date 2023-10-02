#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"ENTER N";
cin>>n;
i=1;
while(i<=n){
     j=1;
     while(j<=n-i+1){
          cout<<j<<" ";
          j++;

     }
   int m=1;
     while(m<=(i-1)*2){
          cout<<"* ";
          m++;
     }
     int k=1;
      int value=n-i+1;
     while(k<=n-i+1){
          
          cout<<value<<" ";
          value--;
          k++;
     }

i++;
cout<<endl<<endl;}
    
     return 0;
}