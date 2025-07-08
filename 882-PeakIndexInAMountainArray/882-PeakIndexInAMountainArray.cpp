// Last updated: 7/8/2025, 7:27:00 PM
class Solution {
public:
    int check (int mid ,vector<int>& arr)
    {
        if( mid-1>=0 && arr[mid]>arr[mid+1])
        {
            return 1;
        }
        return 0 ;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo = 0 ;
        int hi = arr.size()-1 ;
        int ans = -1 ;

        while(lo<=hi)
        {
            int mid = lo+(hi-lo)/2 ;
            if(check(mid,arr))
            {
                ans = mid ;
                hi = mid - 1 ;
            }else
            {
                lo = mid + 1 ;
            }
        }
        return ans;
    }
};