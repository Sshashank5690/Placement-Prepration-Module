class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(n,0);
        int posInd=0;
        int negInd=1;

        for(int i =0;i<n;i++){
            if(nums[i] < 0){  // negative index pe store hoga negative valu check karke
                ans[negInd] = nums[i];
                negInd +=2;  // jaise negtive hai 1 se start toh 1+2>> 3 next index hoga
            }
            else{
                ans[posInd]= nums[i];
                posInd += 2; // positive index store hoga 0 se >> 0+2>> 2
            }
        }
        return ans;
    }
};