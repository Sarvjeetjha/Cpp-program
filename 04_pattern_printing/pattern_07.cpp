#include<iostream>
using namespace std;

int main() 
{

    int n;
    cout<<"enter n";
    cin>>n;
    int len=2*n-1;
    int a[len][len];
  	int start=0,end=len-1;
      
    while(n!=0){
        for(int i=start;i<=end;i++){
            for (int j=start; j<=end; j++) {
                if(i==start||j==start||j==end||i==end){
                    a[i][j]=n;
                }
            
            }
            
        }
        start++;
        end--;
        n--;
    }
    for(int i=0;i<len;i++){
        for (int j=0; j<len;j++) {
       cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}