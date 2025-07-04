// Last updated: 7/4/2025, 6:29:54 PM
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans ;
        unordered_set<int> st ;
        for(int i = 0 ;i<A.size();i++)
        {
            st.insert(A[i]);
            st.insert(B[i]);
            ans.push_back((i+1)*2-st.size());
        }


        return ans ;
    }
};