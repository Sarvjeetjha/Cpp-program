

#include<iostream>
using namespace std;
int main(){
int i,j,n;
    cout<<"enter n";
    cin>>n;
    i=1;
    while(i<=n){
        int value = 0;
        while(value<i-1){
            cout<<"";
            value++;
        }
        j=1;
        int s=0;
        while(j<=n-i+1){
            s=s+1;
            cout<<s;
            j++;

        }
        i++;
        cout<<endl;
    }
    
     return 0;
}