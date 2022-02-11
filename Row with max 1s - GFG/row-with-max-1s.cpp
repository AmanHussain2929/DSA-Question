// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
#include<map>
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	     map<int, int> a;
	   for (int i = 0; i < arr.size(); i++)
    {
         int count=0;
        for (int j = 0; j < arr[i].size(); j++)
        {
             if(arr[i][j]==1) count++;
        }   
    a.insert(pair<int, int>(i, count));
    }
     map<int, int>::iterator itr;
     int max=INT_MIN;
     int index;
    for (itr = a.begin(); itr != a.end(); ++itr) {
        if(max<itr->second) 
        {
        max=itr->second;
        index=itr->first;
        }
    }
    if(max==0) return -1;
    else return index;
    
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends