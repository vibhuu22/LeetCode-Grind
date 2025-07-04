// Last updated: 7/4/2025, 6:29:49 PM
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr ;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        auto it2 = nums.end();
        it2-- ;
        while(n>0)
        {    
            int temp ;
            auto it = nums.begin();
            temp = *it ;
            *it = *it2 + 1 ;
            it++;
            arr.push_back(*it);
            *it = *it2 + 2 ;
            arr.push_back(temp);
            sort(nums.begin(),nums.end());
            n-=2;
        }
        return arr ;
    }
};