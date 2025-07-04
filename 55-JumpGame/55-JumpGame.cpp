// Last updated: 7/4/2025, 6:31:15 PM
class Solution {
public:
    vector<int> nums;
    int dp[10001];

    bool rec(int pos) {
        if (pos >= nums.size() - 1) return true;
        if (dp[pos] != -1) return dp[pos];

        for (int jump = 1; jump <= nums[pos]; jump++) {
            if (rec(pos + jump)) {
                return dp[pos] = 1;
            }
        }

        return dp[pos] = 0;
    }

    bool canJump(vector<int>& inputNums) {
        nums = inputNums;
        memset(dp, -1, sizeof(dp));
        return rec(0);
    }
};
