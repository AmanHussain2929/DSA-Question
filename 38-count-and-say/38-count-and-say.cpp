class Solution {
public:
    string countAndSay(int n) {
               
    if(n==1) return "1";
        if(n==2) return "11";
         string a="11";
        for(int i=3;i<=n;i++)
        {
            string b="";
            a=a+'!';
            int count=1;
            for(int j=1;j<a.length();j++)
            {
                if(a[j]!=a[j-1])
                {
                    b=b+to_string(count);
                    b=b+a[j-1];
                    count=1;
                }
                else
                {
                    count++;
                }
            }
            a=b;
        }
    return a;
    }
};