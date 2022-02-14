// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        sort(arr,arr+N);
      int count=0;
      int max=0;
     vector<int> v;
     v.push_back(arr[0]);
     for(int i=1;i<N;i++)
     {
         if(arr[i]!=arr[i-1]) v.push_back(arr[i]);
     }
     for(int i=0;i<v.size();i++)
     {
         if(v[i]-v[i-1]==1 && i>0) count++;
         else count=1;
         if(max<count) max=count;
     }
     return max;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends