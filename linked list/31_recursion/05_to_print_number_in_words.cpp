//to_print_number_in_words
#include<iostream>
using namespace std;
void print(string arr[],int n){
    if(n==0)
        return;
    else{
        int digit=n%10;
        n=n/10;
        print(arr,n);
        cout<<arr[digit]<<" ";
    }

}
int main(){
int a;
cout<<"enter no"<<endl;
cin>>a;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
print(arr,a);

    
return 0;
}