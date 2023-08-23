#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
bool containsDuplicate(vector<int>& nums)
{
    bool ans=false;
    map<ll,ll> cnt;
    for(int i=0;i<nums.size();i++){
       cnt[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
       if(cnt[nums[i]]>1){
        ans=true;
        break;
       }
    }

    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<containsDuplicate(arr)<<endl;


}
