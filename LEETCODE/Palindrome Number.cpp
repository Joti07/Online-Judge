#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
bool isPalindrome(int x)
{
    long long n=x,d=1,rev=0,mod;
    while(n>0)
    {

        mod=(n%10);
        rev=rev*10+mod;
        n=n/10;
    }

    if(rev==x)
        return true;
    else
        return false;


}
int main()
{
    if(isPalindrome(101))
        cout<<"yes";
    else
        cout<<"NO"<<endl;
}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
