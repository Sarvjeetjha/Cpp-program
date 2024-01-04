#include <iostream>
#include <stack>
#include<string>
using namespace std;
//String reverse using stack;
int main()
{
    string s;
    cout << "Enter string" << endl;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {   char c=s[i];
        st.push(c);
    }
    string ans="";
    
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    cout<<ans;
    return 0;
}