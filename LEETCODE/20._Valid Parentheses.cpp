#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
bool isValid(string s)
{
    bool ans = true;
    deque<char> st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push_front(s[i]);

        }
        if(s[i]==')')
        {
            if(st.front()=='(')
            {
                st.pop_front();
            }
            else
            {
                ans=false;
                break;
            }

        }
        if(s[i]=='}')
        {
            if(st.front()=='{')
            {
                st.pop_front();
            }
            else
            {
                ans=false;
                break;
            }

        }
        if(s[i]==']')
        {
            if(st.front()=='[')
            {
                st.pop_front();
            }
            else
            {
                ans=false;
                break;
            }

        }

    }
    if(!st.empty())
    {
        return false;
    }

    return ans;

}
int main()
{
    string s;
    cin>>s;
    cout<<isValid(s)<<endl;
}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
