class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int left =0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
              std::swap(nums[left], nums[i]);
              left++;
            }
        }
        return nums;
    }
};