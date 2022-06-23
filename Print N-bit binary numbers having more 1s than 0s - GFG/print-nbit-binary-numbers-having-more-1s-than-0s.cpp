// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
void solve(int n,string op,int zero,int one,vector<string> &ans)
{
if(n==0) 
{
ans.push_back(op);
return;
}
if(n>0)
{
string op1=op;
op1.push_back('1');
solve(n-1,op1,zero,one+1,ans);
}
if(one>zero)
{
string op2=op;
op2.push_back('0');
solve(n-1,op2,zero+1,one,ans);
}
}
	vector<string> NBitBinary(int N)
	{
	  vector<string>ans;
	  int zero=0;
      int one=0;
       string op="";
      solve(N,op,zero,one,ans);
      return ans;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends