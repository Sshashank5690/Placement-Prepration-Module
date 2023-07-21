class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> m;
        for (int i = 0; i < (int)nums.size(); i++) {
		    // checking if target - nums[i] already exists in the map
            if (m.count(target - nums[i])) {
                return {i, m[target - nums[i]]};
            }
			// if it does not, then just update the map with the current element
            m[nums[i]] = i;
        }
        
		/* This is just to avoid the compiler warning of not returning anything
		    from a function with a return type of vector<int>
		*/
        return {};
    }
};



// brute force
/*
   class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            // for each element nums[i], go through the whole array
             //  again to see if there is an element target - nums[i] at
              // an index other than i
            
            for (int j = 0; j < n; j++) {
                if (i != j && nums[i] + nums[j] == target) {
                    // found the pair
                    return {i, j};
                }
            }
        }
        
        return {};
    }
};  

*/