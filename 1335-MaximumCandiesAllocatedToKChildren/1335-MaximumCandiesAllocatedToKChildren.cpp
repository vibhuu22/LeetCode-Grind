// Last updated: 7/8/2025, 7:26:53 PM
class Solution {
public: 
    bool check (int per_child ,vector<int>& candies, long long& k )
    {   
        if(per_child==0) return 1 ;
        long long can_give_to = 0 ;
        for(auto i : candies)
        {
            can_give_to += i/per_child ;
            if(can_give_to >=k) return 1;
        }
        return 0 ;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long  nc = 0 ;
        for(auto i : candies)
        {
            nc+=i;
        }
        long long lo = 0 ;
        long long hi = nc/k;
        long long ans = 0 ;
        while(lo<=hi)
        {
            long long mid = lo + (hi-lo)/2 ;
            if(check(mid,candies,k))
            {
                ans = mid ;
                lo = mid + 1 ;
            }
            else
            {
                hi = mid -1 ;
            }
        }
        return ans; 
    }
};