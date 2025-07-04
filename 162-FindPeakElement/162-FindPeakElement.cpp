// Last updated: 7/4/2025, 6:31:05 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size()!=1 && nums[0]>nums[1])
        return 0;

        if(nums.size()!=1 &&nums[nums.size()-1]>nums[nums.size()-1-1])
        return (nums.size()-1) ;

        int i = 1 ;
        int j = nums.size()-2 ;
        while(i<=j)
        {
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1] )
            {
                return i ;
            }
                        if(nums[j]>nums[j+1] && nums[j]>nums[j-1] )
            {
                return j ;
            }

            i++;
            j--;
        }

        return 0 ;
    }
};