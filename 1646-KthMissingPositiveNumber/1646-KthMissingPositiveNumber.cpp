// Last updated: 7/4/2025, 6:30:13 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       set<int> st ;
       for(auto i : arr)
       {
        st.insert(i);
       } 
        int missing = 0 ;
       for(int i =1 ; ; i++)
       {
        if(st.find(i)==st.end())
        {
            missing++;
        }
        if(missing==k)
        {
            return i ;
        }
       }
       return 0 ;
    }
};