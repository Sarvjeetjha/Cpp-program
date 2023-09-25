//power 2^n
#include<iostream>
using namespace std;
int power(int n){
    if(n==0)
        return 1;
    return (2*power(n-1));
}
int main(){
int a;
cin>>a;
cout<<"power of "<<"2^"<<a<<" is "<<power(a)<<endl;
     return 0;
}