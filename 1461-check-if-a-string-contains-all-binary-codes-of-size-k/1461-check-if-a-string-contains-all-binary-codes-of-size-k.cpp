class Solution {
public:
    bool hasAllCodes(string s, int k) {
     if(s.size()<k) return false;
        unordered_set<string> us;
        for(int i=0;i<=s.size()-k;i++)
        {
            us.insert(s.substr(i,k));
        }
       bool a=false;
        int b=pow(2,k);
        if(us.size()==b) a=true;
        return a;
    }
};