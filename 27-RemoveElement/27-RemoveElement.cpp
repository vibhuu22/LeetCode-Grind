// Last updated: 7/4/2025, 6:31:24 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0 ;
        for(int i = 0 ; i<nums.size() ; i++)
        {   
            if(nums[i]==val)
            {   
                nums[i]=51 ;
            }
            else
            {
                k++;
            }
        }

        sort(nums.begin(),nums.end());
        return k;
    }
};