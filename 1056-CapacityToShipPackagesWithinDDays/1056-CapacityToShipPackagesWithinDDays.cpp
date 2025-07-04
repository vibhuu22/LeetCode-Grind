// Last updated: 7/4/2025, 6:30:30 PM
class Solution {
public:
    bool check(vector<int>& weights, int mid , int days)
    {   
        int d = 1 ;
        long long s = 0 ;
        for(int i = 0 ; i<weights.size();i++)
        {
            s+=weights[i];
            if(s>mid)
            {
                d++;
                i--;
                if(d>days)
                {
                    return 0 ;
                }
                s=0;
            }
        }
        return 1 ;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        if(days==1)
        {
            long long s = 0 ;
            for(auto i : weights)
            {
                s+=i;
            }
            return s;
        }
        int lo = 1 ;
        int hi = 1e7;
        int ans = 1 ;
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2 ;
            if(check(weights,mid,days))
            {
                ans = mid ;
                hi = mid-1 ;
            }
            else 
            {
                lo = mid + 1 ;
            }
        }
        return ans ;
    }
};