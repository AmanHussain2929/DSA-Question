class Solution {
public:
    bool backspaceCompare(string s, string t) {
     string s1,s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && s1.empty()==false)
            {
                s1.pop_back();
            }
            else if(s[i]!='#')
            {
                s1.push_back(s[i]);
            }
        }
         for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' && s2.empty()==false)
            {
                s2.pop_back();
            }
            else if(t[i]!='#')
            {
                s2.push_back(t[i]);
            }
        }
        cout<<s1<<endl;
        cout<<s2<<endl;
     if(s1==s2) return true;
       return false;
    }
};