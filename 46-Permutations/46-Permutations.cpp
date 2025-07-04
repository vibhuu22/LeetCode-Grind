// Last updated: 7/4/2025, 6:31:19 PM
class Solution {
public:
    vector<int> arr ;
            vector<vector<int>> all_sol ;


    bool check (int level , int ch)
    {
        set<int> cu ;
        for(auto i : arr)
        {
            cu.insert(i);
        }
        if(cu.find(ch)!=cu.end())
        {
            return 0 ;
        }
        return 1;
    }
    void rec (int level , vector<int> & nums)
    {
        if(level == nums.size())
        {
            if(arr.size()==nums.size())
            {
                all_sol.push_back(arr);
            }
            return ;
        }

        for(int ch = 0 ; ch<nums.size();ch++)
        {
        if(check(level,nums[ch]))
        {
        arr.push_back(nums[ch]);
        rec(level+1,nums);
        arr.pop_back();

        }

        rec(level+1,nums);

        }

       


    }
    vector<vector<int>> permute(vector<int>& nums) {
        rec(0,nums);

        return all_sol ;
    }
};