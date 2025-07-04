// Last updated: 7/4/2025, 6:31:10 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>ans;
        //0s
        for(int i=0 ; i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                ans.push_back(nums[i]);
            }
        }
        //1s
                for(int i=0 ; i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                ans.push_back(nums[i]);
            }
        }

        //2s
                for(int i=0 ; i<nums.size();i++)
        {
            if(nums[i]==2)
            {
                ans.push_back(nums[i]);
            }
        }

        // copy ans to nums
        for(int i=0 ; i<nums.size();i++)
        {
            nums[i]=ans[i];
        }
    }
};