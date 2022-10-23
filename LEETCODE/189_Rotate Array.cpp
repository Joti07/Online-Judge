#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
void rotate(vector<int>& nums, int k)
{
    deque<int> dq;
    for(int i=0;i<nums.size();i++)
    {
        dq.push_back(nums[i]);
    }
    for(int i=0;i<k;i++)
    {
        int a = dq.back();
        dq.pop_back();
        dq.push_front(a);
    }
    nums.clear();
    for(int i=0;i<dq.size();i++)
    {
       nums.push_back(dq[i]);
    }
    for(int i=0;i<dq.size();i++)
    {
       cout<<nums[i]<< " ";
    }
    cout<<endl;

}
int main()
{
    vector<int> num ;
    int k,n;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        num.push_back(a);
    }
//    num.push_back(-1);
//    num.push_back(-100);
//    num.push_back(3);
//    num.push_back(99);
    rotate(num,k);


}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
