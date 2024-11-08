class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), m = INT_MIN, s = 0;
        for (int i = 0; i < n; i++) {
            s = s + nums[i];
            m = max(m, s);
            if (s < 0) {
                s = 0;
            }
        }
        return m;
    }
};
