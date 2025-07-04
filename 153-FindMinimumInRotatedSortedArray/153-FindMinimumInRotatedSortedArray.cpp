// Last updated: 7/4/2025, 6:31:06 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0 ;
        int hi = nums.size()-1 ;
        int ans = 0 ;

        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2 ;
            if((nums[mid]<nums[0]))
            {
                ans = mid ;
                hi = mid - 1 ;
            }
            else
            {
                lo = mid + 1 ;
            }
        }

        return nums[ans] ;
    }
};