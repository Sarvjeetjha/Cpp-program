//to calculate power using recursion and   fast exponentiation
#include<iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0)
        return 1;
    if(b==1)
        return a;
    else{
        if(b&1){
            //recursive call if b is odd
            return a*(power(a,b/2)*power(a,b/2));
        
        }
        else{
            //recursive call if b is even
            return (power(a,b/2)*power(a,b/2));
        }
    }
    
}
int main(){
int a,b;
//fubnction call
cout<<power(3,3)<<endl;
    
     return 0;
}