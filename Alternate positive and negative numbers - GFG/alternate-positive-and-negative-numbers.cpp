// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void rearrange(int arr[], int n) {
	  vector<int> v1,v2;
	  for(int i=0;i<n;i++) 
	  {
	      if(arr[i]>=0) v1.push_back(arr[i]);
	      else v2.push_back(arr[i]);
	  }
	  int i=0, j = 0, k = 0;
        while(i<n && j<v1.size() && k<v2.size())
        {

            if(i%2==0)
            {
                arr[i]=v1.at(j);
                j++;
            }

            else
            {
                arr[i]=v2.at(k);
                k++;
            }

            i++;
        }

        while(j<v1.size())
        {
            arr[i]=v1.at(j);
            j++;
            i++;
        }

        while(k<v2.size())
        {
            arr[i]=v2.at(k);
            k++;
            i++;
        }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends