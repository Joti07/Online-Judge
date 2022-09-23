#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
int removeDuplicates(vector<int>& nums)
{
    set<int> st;
    set<int>itea;
    for(int i=0; i<nums.size(); i++)
    {
        st.insert(nums[i]);

    }
    nums.clear();
    for(auto& str: st)
    {
        nums.push_back(str);
    }

    int k=st.size();
    return k;

}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<removeDuplicates(v)<<endl;
}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
