#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
bool isAnagram(string s, string t)
{
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
        return true;
    else
        return false;
}
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<isAnagram(s,t)<<endl;



}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
