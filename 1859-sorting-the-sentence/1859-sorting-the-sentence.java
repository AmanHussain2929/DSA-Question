class Solution {
    public String sortSentence(String s) {
        
      String str[]=s.split(" ");
      String  sol="";     
      String ans[]=new String[str.length];
        for(String g:str)
        { 
           int index=g.charAt(g.length()-1)-48;
          ans[index-1]=g.substring(0,g.length()-1);   
        }
        for(int i=0;i<ans.length-1;i++)
        {
           sol+=ans[i]+" ";
        }
        sol+=ans[ans.length-1];
        return sol;
    }
}
