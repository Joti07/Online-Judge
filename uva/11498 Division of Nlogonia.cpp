#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
int tc=1;
char arr[101][101];
int main()
{
    ll k;
    while(cin>>k)
    {
        if(k==0)
         return 0;
        ll n,m;
        cin>>n>>m;
        for(int i=0;i<k;i++)
        {
            ll x,y;
            cin>>x>>y;
            if(x==n || y==m)
            {
                cout<<"divisa"<<endl;
            }
            else if(x>n && y>m)
            {
                cout<<"NE"<<endl;
            }
            else if(x>n && y<m)
            {
                cout<<"SE"<<endl;
            }
            else if(x<n && y>m)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"SO"<<endl;
            }
        }
    }

}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
