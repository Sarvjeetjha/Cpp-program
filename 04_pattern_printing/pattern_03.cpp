#include<iostream>
using namespace std;
int main(){
int row,column,i,j,n;
cout<<"enter number\n";
cin>>n;
row=1;
while (row<=n)
{
    column=1;
    while (column<=n-row)
    {
       cout<<" ";
       column++;
    }
    j=1;
    while(j<=row){
        cout<<j;
        j++;
    }
    cout<<endl;
   row++;

    
}


    
     return 0;
}