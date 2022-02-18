// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
        
	 	vector<string>find_permutation(string S)
		{
		     vector<string> ans;
		    permutation(S,0, S.length()-1,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
		
			void permutation(string &s,int start,int end,vector<string>&ans)
			{
    	    if(start==end)
    	    {
    	        ans.push_back(s);
    	        return;
    	    }
    	    else
    	    {
        	    for(int i=start;i<=end;i++)
        	    {
        	        swap(s[start],s[i]);
        	        permutation(s,start+1,end,ans);
        	        swap(s[start],s[i]);
        	    }
    	    }
    	} 
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends