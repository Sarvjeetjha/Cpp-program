//to reverese string using recursion
#include<iostream>
using namespace std;
void rev(string &str,int i,int j){
    if(i>j)
        return ;
    swap(str[i],str[j]);
    i++;
    j--;
    rev(str, i, j);
}
int main(){
string str ="hello";
int l=str.length()-1;
rev(str,0,l);
cout<<"reverse of string is "<<str<<endl;
}