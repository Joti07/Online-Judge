#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
int tc=1;
char arr[101][101];
int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            return 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        if(tc!=1)
            cout<<endl;
        cout<<"Field #"<<tc++<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]=='*')
                    cout<<"*";
                else
                {
                    ll cnt=0;
                    if(arr[i+1][j]=='*')
                        cnt++;
                    if(arr[i-1][j]=='*')
                        cnt++;
                    if(arr[i][j+1]=='*')
                        cnt++;
                    if(arr[i][j-1]=='*')
                        cnt++;
                    if(arr[i+1][j+1]=='*')
                        cnt++;
                    if(arr[i+1][j-1]=='*')
                        cnt++;
                    if(arr[i-1][j+1]=='*')
                        cnt++;
                    if(arr[i-1][j-1]=='*')
                        cnt++;
                    cout<<cnt;


                }
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                arr[i][j]=0;
        }


    }

}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
