class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' && count == 0){
                count++;
            }
            else if(s[i] == '(' && count>=1){
                res+= s[i];
                count ++;
            }
            else if(s[i] == ')' && count >1 ){
                res+=s[i];
                count--;
            }
            else if(s[i] == ')' && count ==1){
                count--;
            }
        }
        return res;
    }
};

/*
class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int opened = 0;
        for (char c : S) {
            if (c == '(' && opened++ > 0) res += c;
            if (c == ')' && opened-- > 1) res += c;
        }
        return res;
    }
};
*/