// Last updated: 7/4/2025, 6:29:53 PM
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int ans = 0 ;
        for(int i = 0 ; i<nums.size()-1 ; i++)
        {
            for(int j= i+1 ; j<nums.size();j++)
            {
                if(nums[i]+nums[j]<target)
                {
                    ans++;
                }
            }
        }
        
         return ans;
    }
};