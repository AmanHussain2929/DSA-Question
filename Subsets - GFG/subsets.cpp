// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void solve(vector<vector<int>> &ans,vector<int>A,vector<int> op)
    {
        if(A.size()==0)
        {
          ans.push_back(op);
          return ;
        } 
         vector<int> op1,op2;
         op1=op,
         op2=op;
         op2.push_back(A[0]);
        A.erase(A.begin()+0);
        solve(ans,A,op1);
        solve(ans,A,op2);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
    vector<vector<int>> ans;
       vector<int>op; 
       solve(ans,A,op);
      sort(ans.begin(),ans.end());
      return ans;  
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends