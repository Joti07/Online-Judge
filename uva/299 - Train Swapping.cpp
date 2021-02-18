#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
int tc=1;
ll cnt=0,arr[mx];
void insertionSort( int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            cnt++;
        }
        arr[j + 1] = key;
    }
    cout<<"Optimal train swapping takes ";

    cout<<cnt<<" swaps."<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        insertionSort(n);
        cnt=0;

    }

}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
