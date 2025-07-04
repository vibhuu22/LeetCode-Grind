// Last updated: 7/4/2025, 6:29:57 PM
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 0 ; i<nums.size()-1 ; i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        // shift zeroes to end ;
        vector<int> nums2 ;
        int z =0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums2.push_back(nums[i]);
            }
        }

        nums2.resize(nums.size(),0);
        
        return nums2;
    }
};