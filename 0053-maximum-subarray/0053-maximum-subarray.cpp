//## keadane algo
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        //maximumSum will calculate our ans and currSumSubarray will calculate maximum sum subarray till ith position 
        int maximumSum = INT_MIN, currSumSubarray = 0;
        for (int i = 0; i < n; i++) {
            currSumSubarray += nums[i]; 
            maximumSum = max(maximumSum, currSumSubarray);
            //here we are taking max with 0 bcz if currSumSubarray = -1 or any negative value then it again starts with currSumSubarray = 0 and if the no positive element in array then return empty ie 0
            currSumSubarray = max(currSumSubarray, 0);
        } 
        return maximumSum;
    }
};