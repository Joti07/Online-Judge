//Problem Link: https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/
class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<5){
            return 0;
        }
      
        sort(nums.begin(),nums.end());
        int n=nums.size()-1, ans=INT_MAX;
        for(int i=0;i<=3;i++){
             ans=min(ans,abs(nums[3-i]-nums[n-i]));
        }
        return ans;
    }
};