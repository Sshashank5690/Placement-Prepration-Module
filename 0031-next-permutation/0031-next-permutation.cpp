class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        int ind =-1;
        int n=nums.size();

        for(int i=n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){ // num less tha dip >> where to change
                ind = i;
                break;
            }
        }

        if(ind == -1){  // initially no dip retun the array itself
            reverse(nums.begin(),nums.end());
            return nums;
        }
        
        for(int i=n-1;i>ind;i--){
            if(nums[i] > nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        
        reverse(nums.begin() + ind + 1, nums.end());

        return nums;
    }
};