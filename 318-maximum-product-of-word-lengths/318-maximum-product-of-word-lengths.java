class Solution {
    boolean check(String p,String q)
    {
        HashSet<Character>hs=new HashSet<>();
        for(int i=0;i<p.length();i++)
        {
            hs.add(p.charAt(i));
        }
        for(int i=0;i<q.length();i++)
        {
            if(hs.contains(q.charAt(i))) return true;
        }
        return false;
    }
    public int maxProduct(String[] words) {
         int n=words.length;
        int max=0;
        int p=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(!check(words[i],words[j]))
                {
                 p=words[i].length()*words[j].length();
                    if(p>max) max=p;
                }
            }
        }
        return max;
    }
}