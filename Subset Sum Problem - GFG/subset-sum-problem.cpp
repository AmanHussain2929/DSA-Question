// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        bool t[arr.size()+1][sum+1];
       
        for(int i=0; i<=arr.size(); i++) t[i][0] = true;
       for(int i=1; i<=sum; i++)   t[0][i] = false;
       
         for(int i=1;i<arr.size()+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
               if(j-arr[i-1]<0)
               {
                    t[i][j]=t[i-1][j];   
               }
               else
               {
                 t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
               }
            }
           
        }
        
        return t[arr.size()][sum];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends