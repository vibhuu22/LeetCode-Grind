// Last updated: 7/4/2025, 6:30:21 PM
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0 ; i<arr.size() ; i++)
        {
            for(int j = 0 ; j<arr.size() ; j++)
            {
                if(arr[i]==2*arr[j] && i!=j)
                {
                    return 1 ;
                }
            }
        }
        return 0 ;
    }
};