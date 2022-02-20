// { Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string printSequence(string S)
{
     string code;
    string number[26] = {"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999", "9999"};
   int index;
   for(int i = 0;i < S.length(); i++)
   {
       if(S[i] == ' ')  
       {
       code=code+"0";
       }
       else
      {
      index=S[i]-65;
      code=code+number[index];
      }
   }
   return code;
    
}