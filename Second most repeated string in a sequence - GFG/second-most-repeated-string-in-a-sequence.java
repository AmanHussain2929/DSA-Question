// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            String arr[] = new String[n];
            for(int i = 0;i<n;i++)
                arr[i] = sc.next();
            
            Solution ob = new Solution();
            
            System.out.println(ob.secFrequent(arr, n));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution
{
    String secFrequent(String arr[], int N)
    {
        Map<String,Integer> hm=new HashMap<>();
        for(String s:arr)
        {
            if(hm.containsKey(s)==true)
            {
               hm.put(s,hm.get(s)+1); 
            }
            else
            {
              hm.put(s,1);
            }
            
        }
        List<Integer> l=new ArrayList<>();
     hm.forEach(
            (key,value)-> l.add(value) );
            Collections.sort(l);
           int max=l.get(l.size()-1);
           int smax=0;
          String ans ="";
         for(String g : hm.keySet())
        {
        	if(hm.get(g)<max && hm.get(g)>smax) 
        	{
        	    smax=hm.get(g); 
        	    ans=g;
            }
     }
        return ans;
    }
}