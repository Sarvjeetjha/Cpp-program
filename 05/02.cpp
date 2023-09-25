//TO   count no of one bit 
#include<iostream>
using namespace std;
int main(){
int n,s=0;
    cout<<"enter no\n";
    cin>>n;
    while(n){
        if(n&1){
            s++;
        }
        n=n>>1;
    }
    cout<<s;
    
     return 0;
}