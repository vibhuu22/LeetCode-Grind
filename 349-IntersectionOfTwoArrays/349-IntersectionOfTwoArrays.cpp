// Last updated: 7/4/2025, 6:30:49 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> an ;
        for(int i = 0 ; i<nums1.size();i++)
        {
            for(int j = 0 ; j<nums2.size() ; j++)
            {
                if(nums1[i]==nums2[j])
                {
                    an.insert(nums1[i]);
                }
            }
        }
        vector<int> ans ;
        for(auto i : an)
        {
            ans.push_back(i);
        }

        return ans;
    }
};