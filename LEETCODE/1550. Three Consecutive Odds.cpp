class Solution
{
public:
    bool threeConsecutiveOdds(vector<int>& arr)
    {
        int cnt=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(i+2<arr.size())
            {
                if(arr[i]%2==1 && arr[i+1]%2==1  && arr[i+2]%2==1)
                {
                    cnt=1;
                }
            }
            if(cnt==1)
            {
                return true;
            }
        }
        return false;

    }
};
