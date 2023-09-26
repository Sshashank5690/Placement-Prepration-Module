class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long int ans = 0;
        for(int si=0;si<nums.size();si++){
            int smin=INT_MAX;
            int smax=INT_MIN;
          for(int ei=si;ei<nums.size();ei++){
              smin = min(smin,nums[ei]);
              smax = max(smax,nums[ei]);
              ans += (smax- smin);
          }
        }
        return ans;
    }
};

//brute force