//to print array
#include<iostream>
using namespace std;
int main(){
int arr[10];
cout<<"taking input elememt"<<endl;
for(int i=0;i<10;i++){
     cin>>arr[i];
}
cout<<"printing elements fro array"<<endl;
for(int i=0;i<10;i++){
     if(i==0)
     cout<<"[";
     cout<<arr[i]<<" ";
      if(i==9)
     cout<<"]";
}
    
     return 0;
}