class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        return false;
        string combine=s+s;
        return combine.find(goal)!=string :: npos;
    }
};