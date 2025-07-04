// Last updated: 7/4/2025, 6:31:20 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return (lower_bound(nums.begin(),nums.end(),target)-nums.begin());
    }
};