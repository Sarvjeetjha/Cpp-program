#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr={5,8,9,6,3,4,78,6,3,2};
vector<int>arr2(arr.size());
int n;
cout<<"eneter rotate no"<<endl;
cin>>n;
for(int i=0;i<10;i++){
    arr2[(i+n)/10]=arr[i];//error 
}
for(int j=0;j<10;j++)
    cout<<arr2[j]<<" ";
     return 0;
}