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
    int k=1;
    int tem=row;
while(k<=row-1){
    cout<<tem-1;
    tem--;
    k++;

}

    cout<<endl;
   row++;

    
}


    
     return 0;
}