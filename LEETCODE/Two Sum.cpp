#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
vector<int> twoSum(vector<int>& nums, int target)
{

    int flag=0;
    vector<int> res;
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]+nums[j]==target)
            {
                res.push_back(i);
                res.push_back(j);
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }

    return res;

}
int main()
{
    cout<<"Enter number no and target";
    int n,tar;
    cin>>n>>tar;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);

    }
    vector<int> res = twoSum(v,tar);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }
}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
