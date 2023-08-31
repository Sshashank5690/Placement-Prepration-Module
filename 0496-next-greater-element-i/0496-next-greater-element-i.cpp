class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        stack<int> st;
        int n= nums2.size();
        //backward
        for(int i=n-1;i>=0;i--){
            int ele = nums2[i];
            while(!st.empty() && st.top() <= ele){
                st.pop();
            }
            int res = (st.empty()) ? -1 : st.top();
            // insert in map
            umap.insert({ele,res});
            st.push(ele); // push every lement in st
        } // vecot which has elemnt greater traversing over map
        vector<int> ans;
        for(auto x: nums1){
            ans.push_back(umap[x]);
        }
        return ans;
    }
}; 