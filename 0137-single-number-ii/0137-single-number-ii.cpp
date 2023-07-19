class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++; // insertinf the element in map
        }

        for(auto it: mp){
            if(it.second == 1)
            return it.first;
        }
        return -1;
    }
};