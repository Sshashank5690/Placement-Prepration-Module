class Solution {
public:
    string removeKdigits(string nums, int k) 
    {
        stack<char> st;
        st.push(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {
            char c=nums[i];
            while(  k>0 && !st.empty() && st.top()>c)
            {
                st.pop();
                k--;
            }            
            st.push(c);
            if(st.size()==1 && st.top()=='0')
                st.pop();            
        }
        while( k>0 && !st.empty())
        {
            st.pop();
            k--;
        }     

        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans.size()==0?  "0" : ans;

    }
};