#include<iostream>
#include<stack>
using namespace std;
//stack using stl
int main(){
    int a;
    int b;
    stack<int>s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"printing top elemnt"<<endl;
    if(s.empty())
        cout<<"stack is empty"<<endl;
    else    
          cout<<"stack is not empty"<<endl;
    cout<<"top: "<<s.top();
    cout<<"sizee of stack is "<<s.size()<<endl;
}
