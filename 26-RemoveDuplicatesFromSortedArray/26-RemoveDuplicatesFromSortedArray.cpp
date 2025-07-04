// Last updated: 7/4/2025, 6:31:26 PM
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
       // two pointers approach
       int i = 0 ;
       for(int j = 1 ; j<arr.size() ; j++)
       {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
       }

       return i+1 ;
    }
};