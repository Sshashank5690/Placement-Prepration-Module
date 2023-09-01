class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        vector<int> ans;
        temp = nums; // copy of nums
        // push back nums every elem in temp for circular searching
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            int x= temp[i];
            int j =  i+1;
            while(j<temp.size()){
                if(temp[j] > x){
                    x =temp[j];
                    break;
                }
                j++;
            }
            // if still s = temp[i] means no greater elem is found so pushback(-1)
            if(x !=temp[i])
            ans.push_back(x);
            else
            ans.push_back(-1);
        }
        return ans;
    }
};