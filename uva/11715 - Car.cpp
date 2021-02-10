#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
int tc=1;
ll time(ll u,ll v,ll a)
{
    return (v-u)/a;
}
ll s(ll u,ll v,ll t)
{
    return (u+v)*t/2;
}
int main()
{
   ll cnt,n1,n2,n3;
   while(cin>>cnt)
   {
       if(cnt==0)
       {
           return 0;
       }
       cin>>n1>>n2>>n3;
       cout<<"Case "<<tc++<<": ";
       cout<<fixed<<setprecision(3);
       if(cnt==1)
       {
           cout<<s(n1,n2,n3)<<" ";
           cout<<(n2-n1)/n3<<endl;
       }
       if(cnt==2)
       {
           ll t=time(n1,n2,n3);
           cout<<s(n1,n2,t)<<" ";
           cout<<t<<endl;
       }
       if(cnt==3)
       {
           ll v=sqrt(n1*n1+2*n2*n3);
           cout<<v<<" ";
           cout<<time(n1,v,n2)<<endl;
       }
       if(cnt==4)
       {
           ll u=sqrt(n1*n1-2*n2*n3);
           cout<<u<<" ";
           cout<<time(u,n1,n2)<<endl;
       }
   }


}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
