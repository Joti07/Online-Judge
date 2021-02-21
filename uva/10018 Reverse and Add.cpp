#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef long long ll;

int main()
{


    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        vector<int> v,vrev;
        for(int i=1; i<=1000; i++)
        {
            while(n!=0)
            {
                v.push_back(n%10);
                vrev.push_back(n%10);
                n/=10;
            }
            reverse(vrev.begin(),vrev.end());
            if(vrev==v)
            {
                cout<<i-1<<" ";
                for(int j=0; j<v.size(); j++)
                    cout<<v[j];
                cout<<endl;
                break;
            }
            else
            {
                ll num=0,num_rev=0;
                for(int j=0; j<v.size(); j++)
                {
                    num=(num*10)+v[j];
                }
                for(int j=0; j<v.size(); j++)
                {
                    num_rev=(num_rev*10)+vrev[j];
                }
                n=num+num_rev;
                v.clear();
                vrev.clear();


            }


        }
    }

}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
