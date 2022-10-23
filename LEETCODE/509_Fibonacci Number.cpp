#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
int fib(int n)
{
    int arr[1000];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];

}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;


}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
