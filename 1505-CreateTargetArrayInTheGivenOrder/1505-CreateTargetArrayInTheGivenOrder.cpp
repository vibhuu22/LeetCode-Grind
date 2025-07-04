// Last updated: 7/4/2025, 6:30:17 PM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target ;
        for(int i = 0 ;i<nums.size(); i++)
        {   
            target.insert(target.begin()+index[i],nums[i]);
        }

        return target ;

    }
};