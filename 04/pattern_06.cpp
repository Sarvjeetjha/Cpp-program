#include<iostream>
using namespace std;
int main(){
int row,column,i,j,n,s=0;
cout<<"enter number\n";
cin>>n;
row=1;
while (row<=n)
{
    column=1;
    while (column<=n-row+1)
    {
       cout<<column;
       column++;
    }
    j=1;
    while(j<=2*row-2){
      
        cout<<"*";
        j++;
    }
    int k=1;
    int t=n-row+1;
    
while(k<=n-row+1){
    cout<<t;
    t--;
    k++;

}

    cout<<endl;
   row++;

    
}


    
     return 0;
}