#include<iostream>
#include<vector>
using namespace std;

char small(char c){
    if((c>='a' && c<='z') ||(c>='0' && c<='9'))
        return c;
    else
        return (c-'A'+'a');
}


bool pallindrom(vector<char>vec){
    int s=0;
    int e=vec.size()-1;
    while(s<e){
        if(vec[s++]!=vec[e--])
            return false;
            


    }
    return true;

}
int main(){
    string s="Ra m";

    vector<char>s2;
    for (int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z' ) || (s[i]>='0' && s[i]<='9'))
            s2.push_back(small(s[i]));
    }
        // for (int j=0;j<s2.size();j++){
        //     cout<<(s2[j]);
        // }
        

    cout<<pallindrom(s2)<<endl;

    
     //return 0;
}