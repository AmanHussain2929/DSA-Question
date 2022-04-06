// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
         stack<char> st;
        for(int i=0; i<S.size(); i++) {
            while(!st.empty() && st.top()>S[i] && K>0) {
                st.pop();
                K--;
            }
            if(!st.empty() || S[i]!='0') st.push(S[i]);
        }
        while(!st.empty() && K--) {;
            st.pop();
        }
        if(st.empty()) return "0";
        
        string ans;
        
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}
  // } Driver Code Ends