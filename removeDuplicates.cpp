class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = n - 1;
        int count = 0;
        int i = 0;
        for (int j = 1; j < n; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};