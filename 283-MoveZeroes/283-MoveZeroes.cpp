// Last updated: 7/4/2025, 6:30:52 PM
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i = 0 ;
        for(int n = 0 ;n<arr.size() ; n++)
        {
            if(arr[n]==0)
            {
                i = n ;
                break;
            }
        }
        for(int j = i+1 ; j<arr.size() ; j++)
        {
            if(arr[i]==0 && arr[j]!=0)
            {
                swap(arr[i],arr[j]);
                i++;
            }
        }
    }
};