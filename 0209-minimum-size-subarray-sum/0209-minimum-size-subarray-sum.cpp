class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n =  nums.size();

        int i=0,j=0;

        int minL = INT_MAX;

        int sum = 0;
        
        // j ko n tak chala lya
        while(j<n){
          sum += nums[j]; // add kar liya sum j nums ka


          //chota karan cha rahe hain window ke size ko aur dhkte hain target sum comparision
          while(sum >= target){
              minL = min(minL,j-i+1);

              sum -= nums[i];

              i++; // i ke sum ko minus kar diya fir i ko aage badha diya window size kam hogya fir compare kar liya sum aur target ko
          }

          j++;

        }
          
         return minL == INT_MAX ? 0 : minL; 
    }
};