#include<iostream>
using namespace std;
int main(){
int row,column,i,j,n;
cout<<"enetr number"<<"\n";
cin>>n;
row=1;
while (row<=n)
{
    column=1;
    while (column<=row-1)
    {
       cout<<" ";
       column++;
    }
    j=1;
    while(j<=n-row+1){
        cout<<"*";
        j++;
    }
    cout<<endl;
   row++;

    
}


    
     return 0;
}