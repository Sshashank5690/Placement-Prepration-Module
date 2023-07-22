class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int n = nums.size();
       int left = 0;
       int right = 0;
       int len = 0;
       int zero_count = 0;

        while (right < n) {
            if (nums[right] == 0) {
                zero_count++;
            }

            while (zero_count > k) {
                if (nums[left] == 0) {
                    zero_count--;
                }
                left++;
            }

            len = max(len, right - left + 1);
            right++;
        }

        return len;
    }
};
