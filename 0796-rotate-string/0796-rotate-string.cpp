class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        string concatenate = s+s;
        if(concatenate.find(goal)!=string::npos){
            return true;
        }else return false;
    }
};