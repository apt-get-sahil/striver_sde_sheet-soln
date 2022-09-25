class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int best = 0;
        for (int i = 0; i < n; i++) {
            sum = max(nums[i], sum + nums[i]);
            best = max(best, sum);
        }

        return best;
    }
};