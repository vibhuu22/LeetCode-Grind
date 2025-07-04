// Last updated: 7/4/2025, 6:30:06 PM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans ;
        for(auto i : nums)
        {
            ans.push_back(nums[i]);
        }
        return ans ;
    }
};