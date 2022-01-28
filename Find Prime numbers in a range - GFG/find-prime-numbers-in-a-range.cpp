// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
 public:
    vector<int> primeRange(int M, int N) {
     vector<int> p;
     int i;
     i=M;
     while(i<=N)
     {
           int j=2;
           int l=sqrt(i);
           int flag=0;
            if(i==1)
              {
                   flag=1;
              }
         while(j<=l)
         {
             
              if(i==2)
              {  
                  
                  break;
              }
             if(i%j==0)
             {
                 flag=1;
                 break;
             }
             j++;
         }
          if(flag==0)
             {
                 p.push_back(i);
             }
             
         i++;
     }
     return p;
    }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends