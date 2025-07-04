// Last updated: 7/4/2025, 6:29:45 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> v ;
        map<int,int> mp ;
        for(int i =0 ; i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i : mp)
        {
            if(i.second > 1)
            {
                v.push_back(i.first);
            }
        }

        return v ;
    }
};