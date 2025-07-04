// Last updated: 7/4/2025, 6:30:54 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long s1 = (n*(n+1LL))/2LL ; 
        long long sum = 0 ;
        for(auto i : nums)
        {
            sum+=i ;
        }
        return (s1-sum) ;
    }
};