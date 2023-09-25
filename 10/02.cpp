//to print unique element in array
#include<iostream>
using namespace std;
int main(){
int arr[11],ans=0,s=0;
//using XOR operator.
cout<<"enter element in array"<<endl;
for(int i=0;i<11;i++)
    cin>>arr[i];
for(int i=0;i<11;i++)
      ans=ans^arr[i];
cout<<"unique elememnt in array is  "<<ans;
//brute force solution;
/*cout<<"enter elemnt in array"<<endl;
for(int i=0;i<11;i++)
    cin>>arr[i];
for(int i=0;i<11;i++){
    for(int j=0;j<11;j++){
        if(arr[i]==arr[j])
            s++;
    }
    if(s>1)
        s=0;
    if(s==1){
        cout<<"unique elemnt in array is : "<<arr[i];
        break;}
        }*/
    
     return 0;
}