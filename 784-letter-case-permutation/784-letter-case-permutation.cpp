class Solution {
public:
void solve(string ip,string op,set<string>&hs)
{
if(ip.length()==0)
{
hs.insert(op);
return;
}
string op1=op;
string op2=op;
if(isdigit(ip[0]))
{
op1.push_back(ip[0]);
op2.push_back(ip[0]);
ip.erase(ip.begin()+0);
solve(ip,op1,hs);
solve(ip,op2,hs);
return;
}
else
{
op1.push_back(tolower(ip[0]));
op2.push_back(toupper(ip[0]));
ip.erase(ip.begin()+0);
solve(ip,op1,hs);
solve(ip,op2,hs);
return;
}
}
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        set<string> hs;
      string ip=s;
        string op="";
        solve(ip,op,hs);
    for(auto part:hs)
    {
     ans.push_back(part);   
    }
        return ans;
    }
};