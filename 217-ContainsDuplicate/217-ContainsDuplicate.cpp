// Last updated: 7/4/2025, 6:30:58 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st ;
        for(auto i : nums)
        {
            st.insert(i);
        }

        if(st.size()==nums.size())
        {
            return false ;
        }
        return true;
    }
};