//finding maximum and minimum of an arry
#include<iostream>
using namespace std;
int main(){
int ar[10]={2,5,6,9,8,7,50,7,-521,5};
int max = ar[0];
int min = ar[0];
for(int i=0;i<10;i++){
    if(ar[i]>max)
        max=ar[i];
    if(ar[i]<min)
        min=ar[i];
}
cout<<"maximum no is "<<max<<endl;
cout<<"minimum no is "<<min;
    
     return 0;
}