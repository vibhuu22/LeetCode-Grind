// Last updated: 7/4/2025, 6:31:23 PM
class Solution {
public:
    int bs (vector<int>nums , int target , int start , int end)
    {
        int lo = start ;
        int hi = end ;
        // cout << lo << " " << hi << " " ;
        while(lo<=hi)
        {
            int mid = lo+(hi-lo)/2 ;
            if(nums[mid]<target)
            {
                lo = mid + 1 ;
            }
            else if (nums[mid]>target)
            {
                hi = mid-1 ;
            }
            else
            {
                return mid ;
            }
        }
        return -1 ;
    }

    int searchpivot(vector<int> nums)
    {   
        int lo = 0 ;
        int hi = nums.size()-1;
        int ans = nums.size()+1;

        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2 ;
            if(nums[mid]<nums[0])
            {
                ans = mid ;
                hi = mid -1 ;
            }
            else
            {
                lo = mid + 1 ;
            }
        }

        return ans-1 ;
    }

    int search(vector<int>& nums, int target) {
        
               if(nums.size()==2)
        {
            if(nums[0]==target)
            {
                return 0;
            }
            else
            {
                if(nums[1]==target)
                {
                    return 1;
                }
                else
                {
                    return -1 ;
                }
            }
        }
        else if (nums.size()==1 )
        {
            if(nums[0]==target)
            {
                return 0 ;
            }
            else
            {
                return -1;
            }
        }
        if(nums.size()==3)
        {
            if(nums[0]==target)
            {
                return 0;
            }
            else if (nums[1]==target)
            {
                return 1;
            }
            else if (nums[2]==target)
            {
                return 2 ;
            }
        }
        int piv = searchpivot(nums);

        // cout << "Pivot = " << piv << '\n';
        
        if(piv == nums.size())
        {
            // array is sorted , simple binary search
            int start = 0 ;
            int end = nums.size()-1 ;
            int a1 = bs(nums,target,start,end) ;
            if(a1 != -1)
            {
                return a1;
            }
        }
        else
        {
            //search in two
            // array 1 -> 0 to pivot index
            int start1 = 0 ;
            int end1 = piv ;
            int a1 = bs(nums,target,start1,end1);

            if(a1 != -1)
            {
                return a1;
            }

            // array 2 -> pivot index +1 to end
            int start2 = piv+1 ;
            int end2 = nums.size()-1 ;
            
            int a2 =  bs(nums,target,start2,end2);

            if(a2 != -1)
            {
                return a2;
            }
        
        }
    return -1 ;
    }


    };

    
