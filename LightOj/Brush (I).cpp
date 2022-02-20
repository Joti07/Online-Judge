#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+1],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
                continue;
            sum+=arr[i];
        }
        cout<<"Case "<<i++<<": "<<sum<<endl;

    }
}

