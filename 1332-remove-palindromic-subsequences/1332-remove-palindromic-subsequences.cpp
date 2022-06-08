class Solution {
public:
    bool isPallindrome(string s)
    {
     int i=0;
    int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;
            j--;
            
        }
        return true;
    }
    int removePalindromeSub(string s) {
        if(s.size()==0) return 0;
        if(isPallindrome(s)) return 1;
        
        return 2;
    }
};