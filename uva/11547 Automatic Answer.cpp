#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef long long ll;
int tc=1;
void solve()
{
    ll n;
    cin>>n;
    n*=567;
    n/=9;
    n+=7492;
    n*=235;
    n/=47;
    n-=498;
    cout<<abs((n%100)/10)<<endl;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }


}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
