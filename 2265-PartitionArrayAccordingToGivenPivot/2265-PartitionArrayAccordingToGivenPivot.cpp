// Last updated: 7/4/2025, 6:30:01 PM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left ;
        vector<int> right ;
        int piv_freq = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                left.push_back(nums[i]);
            }
            else if (nums[i]>pivot)
            {
                right.push_back(nums[i]);
            }
            else
            {
                piv_freq++;
            }
        }
        vector<int> ans ;
        for(auto i : left)
        {
            ans.push_back(i);
        }
        ans.resize(left.size()+piv_freq,pivot);
        for(auto i : right )
        {
            ans.push_back(i);
        }

        return ans ;


    }
};