class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=INT_MAX;
        int ans=0;
        int res=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<p){
                p=prices[i];
            }
            res=prices[i] - p;

        
        if(ans<res){
            ans=res;
        }
        }
        return ans;
    }
};