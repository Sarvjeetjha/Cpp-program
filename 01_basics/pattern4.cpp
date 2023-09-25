

#include<iostream>
using namespace std;
int main(){
int i,j,n;
    cout<<"enter n";
    cin>>n;
    i=1;
    while(i<=n){
        int k = 1;
        while(k<n-i){
            cout<<" ";
            k++;
        }
        j=1;
        
        while(j<=i){
           
            cout<<j;
            j++;

        }
        int m=2;
        int value=i-1;
    while(m<=i){
        cout<<value;
        value--;
        m++;
    }


        i++;
        cout<<endl;
    }
    
     return 0;
}