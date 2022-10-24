#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
bool checkIfPangram(string sentence)
{
    set<char> st;
    for(int i=0;i<sentence.size();i++)
    {
        st.insert(sentence[i]);

    }
    if(st.size()==26)
        return true;
    else
        return false;
}
int main()
{

    string s,t;
    cin>>s;
    cout<<checkIfPangram(s)<<endl;



}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";

