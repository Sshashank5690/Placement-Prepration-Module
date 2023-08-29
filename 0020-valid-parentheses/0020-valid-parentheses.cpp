class Solution {
public:
    bool isValid(string s) {
        stack<char> str;

        for(int i=0;i<s.size();i++){
            //checking the opening bracket

            if(s[i] == '[' || s[i] == '(' || s[i] ==  '{'){
                str.push(s[i]);
            }
            else{
            //check stack is already empty ie no opening bracket
            if(str.empty())
            return false;
            //get the char from the top
            char c = str.top();
             // if the the opening bracket in top of the  stack and current element are of same type 
            if((c == '(' && s[i] == ')' ) || (c == '[' && s[i] == ']') || (c == '{' && s[i] == '}'))
                    str.pop();
                // If the opening barcket of the same type is not present in the top of stack simply return false;
            else 
              return false;
            }

        }
        return str.empty();
    }
};