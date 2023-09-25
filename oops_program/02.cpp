#include<iostream>
using namespace std;
void print(int n){
    if(n>0){
        print(n-1);
        cout<<n<<" ";
    }
    else
        return ;
}
int main(){
 
 print(10);


    
     return 0;
}