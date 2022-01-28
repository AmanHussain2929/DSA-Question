class Solution {
public:
    int reverse(int x) {
      if(x==0 || x>2147483647||x<-2147483647)
        {
            return 0;
        }
       long int num=0;
        int y=x;
        if(x<0)
        {
            x=-1*x;
        }
        while(x>0)
        {
            num=num*10;
            if(num>2147483647) return 0;
            num=num+(x%10);
            x=x/10;
        }
        if(y<0)
        {
            num=(-1)*num;
        }
        return num;
    }
};