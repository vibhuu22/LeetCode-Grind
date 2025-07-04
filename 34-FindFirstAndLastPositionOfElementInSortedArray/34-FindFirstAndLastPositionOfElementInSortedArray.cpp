// Last updated: 7/4/2025, 6:31:22 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int k) {
     int lo = 0 ;
     int hi = nums.size()-1 ;

     vector<int> a ;

     int ans = -1 ;

     while(lo<=hi)
     {
        int mid = lo + (hi-lo)/2 ;
        if(nums[mid]>k)
        {   
            hi = mid - 1;
        }
        else if (nums[mid]<k)
        {
            lo = mid + 1 ;
        }
        else
        {
        ans = mid ;
        hi = mid - 1 ;
        }
     }

     if(ans == -1)
     {
        a.assign(2,-1);
     }  
     else
     {
    
            a.push_back(ans);
            int p = upper_bound(nums.begin(),nums.end(),k)-nums.begin();
            if(nums[p-1]==k)
            {
                 a.push_back(p-1);
            }
           
     }

     return a ;

    }
};