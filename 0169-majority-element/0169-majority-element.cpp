class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
       int n= nums.size();
       int k = ceil(n/2);// store the value of n/2 eg : if n=8 >> k = 4 aur majority ki value 4 se badi honi chaiye
       
       map<int,int> mp;
    for(auto x :nums)
       {
        mp[x]++;
       }
     int flag=0;
     for(auto it: mp){
        if(it.second> k){
          flag=it.first;
        }
      }
        return flag;
    }
};

