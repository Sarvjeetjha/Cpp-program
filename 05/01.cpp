//to print difference  of multiple and addition
#include<iostream>
using namespace std;
int main(){
int n,add=0,mul=1;
    cout<<"enter no\n";
    cin>>n;
    while(n){
        int r=n%10;
        add+=r;
        mul*=r;
        n=n/10;
    }
    cout<<mul-add;
    
    return 0;
}