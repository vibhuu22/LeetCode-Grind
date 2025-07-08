// Last updated: 7/8/2025, 7:26:30 PM
class Solution {
public:
    long long ans = INT_MIN ;
    vector<int> v ;
    void rec (int level,vector<int>& nums )
    {
        if(level == nums.size())
        {  
            long long ans2 = nums[v[0]]; 
            for(int i = 1 ; i<v.size();i++)
            {
                ans2*=nums[v[i]];
            }
            ans = max(ans,ans2);
            return ;
        }

        // take 
        v.push_back(level);
        rec(level+1,nums);
        v.pop_back();
        // not take
        rec(level+1,nums);

    }
    long long maxStrength(vector<int>& nums) {
        rec(0,nums);
        return ans ;
    }   
};