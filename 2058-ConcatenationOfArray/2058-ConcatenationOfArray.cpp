// Last updated: 7/4/2025, 6:30:05 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(auto i : nums)
        {
            ans.push_back(i);
        }
                for(auto i : nums)
        {
            ans.push_back(i);
        }
        return ans ;
    }
};