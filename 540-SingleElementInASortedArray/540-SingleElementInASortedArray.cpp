// Last updated: 7/4/2025, 6:30:45 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        for(int i = 0 ; i<arr.size() ; i+=2)
        {
            if((arr.size()!=1) && arr[i]!=arr[i+1])
            {
                return arr[i];
            }
        }
        return arr[0] ;
    }
};