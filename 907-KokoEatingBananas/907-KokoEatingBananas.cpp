// Last updated: 7/8/2025, 7:26:59 PM
class Solution {
public:
    bool check (int mid ,int max_Hours,vector<int>& piles)
    {
        long long hours_taken = 0 ;
        for(auto i : piles)
        {
            if(i<=mid)hours_taken++;
            else
            {
                if(i%mid)
                {
                    hours_taken += i/mid + 1;
                }else
                {
                    hours_taken+=i/mid;
                }
            }
        }
        if(hours_taken > max_Hours) return 0 ;
        return 1;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1 ;
        int hi = 1e9;
        int ans = 0 ;
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2 ;
            if(check(mid,h,piles))
            {
                ans = mid ;
                hi = mid -1 ;
            }else
            {
                lo = mid + 1 ;
            }
        }
        return ans ;
    }
};