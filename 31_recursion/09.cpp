//to_check_that_string_is_pallindromm_or_not
#include<iostream>
#include<array>
using namespace std;
//recursive function
bool pallindrom(string &str,int i,int j){
    //base case
    if(i>j)
        return true;
    //solving for one case only
    else{
        if(str[i]!=str[j])
            return false;
        else{
        i++;
        j--;
        //recursive call
        return pallindrom(str, i, j);}}
}
int main(){
string str="abca";
int j=str.length()-1;
//function call
bool is_pal=pallindrom(str,0,j);
if(is_pal)
    cout<<"it is pallindrom"<<endl;
else
    cout<<"it is not pallindrom"<<endl;

    
     return 0;
}