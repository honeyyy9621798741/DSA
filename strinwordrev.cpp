#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string ans="";
    string word;
    stringstream temp(s);
    stack<string>st;
    while(temp>>word)
    {
        reverse(word.begin(),word.end());
        st.push(word);
    }
    while(st.size()!=1)
    {
        ans=ans+st.top()+" ";
        st.pop();
    }
    ans=ans+st.top();
    cout<<ans;

}