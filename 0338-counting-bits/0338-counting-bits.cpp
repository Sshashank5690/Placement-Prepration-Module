class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        for(int i=0;i<n+1;i++){
            res[i] = __builtin_popcount(i);
        }
        return res;
    }
};