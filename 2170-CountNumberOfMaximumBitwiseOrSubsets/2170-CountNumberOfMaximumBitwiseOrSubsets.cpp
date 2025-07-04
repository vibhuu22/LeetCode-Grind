// Last updated: 7/4/2025, 6:30:04 PM
class Solution {
public:
    vector<int> cur_ss ;
    map<int,int> bwors ;

    void rec(int level , vector<int>&nums)
    {
        if(level==nums.size())
        {   
            int br= 0 ;
            for(auto i : cur_ss)
            {
                br |= i ;
            }
            bwors[br]++;
            // cout << '\n';
            return ;
        }

        cur_ss.push_back(nums[level]);
        rec(level+1,nums);
        cur_ss.pop_back();

        rec(level+1,nums);



    }

    int countMaxOrSubsets(vector<int>& nums) {
        rec(0,nums);
        auto it = bwors.end();
        it--;
        return it->second;
    }
};