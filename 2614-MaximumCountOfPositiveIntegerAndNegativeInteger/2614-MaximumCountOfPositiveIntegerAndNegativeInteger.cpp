// Last updated: 7/4/2025, 6:29:56 PM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = (lower_bound(nums.begin(),nums.end(),0)-nums.begin()) ;
        if(n== -1 )
        {
            n = 0 ;
        }
        int p = nums.size()-(upper_bound(nums.begin(),nums.end(),0)-nums.begin()) ;

        return (max(p,n)) ;
    }
};