class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        
        if(n == 0){
            return res;
        }

        res[0] = 0; // Binary of 0 has 0 number of bits set as 1

        for(int i=1; i<=n; i++){
           
           if(i%2 != 0){
               res[i] =  res[i/2] + 1;
           }
           else {
               res[i] = res[i/2];
           }
        }
        return res;
    }
};