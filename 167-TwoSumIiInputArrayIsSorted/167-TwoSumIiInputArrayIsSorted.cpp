// Last updated: 7/4/2025, 6:31:03 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
       int lo = 0 ;
       int hi = arr.size()-1 ;
        vector<int> ans ;
       while(lo<hi)
       {
        if(arr[lo]+arr[hi]>target)
        {
            hi--;
        }
        else if (arr[lo]+arr[hi]<target)
        {

            lo++;
        }
        else
        {
            ans.push_back(lo+1);
            ans.push_back(hi+1);
            break;
        }
       } 

       return ans ;
    }
};