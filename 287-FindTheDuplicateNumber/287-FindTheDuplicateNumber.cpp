// Last updated: 7/4/2025, 6:30:50 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        for(int i = 0 ; i<nums.size()-1 ; i++)
        {
            if(nums[i+1]==nums[i])
            {
                return nums[i];
            }
        }

        return 0 ;
    }
};