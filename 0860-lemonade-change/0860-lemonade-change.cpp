class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int arr[3]={0};
     int coins[3]={20,10,5};
        if(bills[0]!=5) return false;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                arr[2]=arr[2]+1;
                continue;
            }
            if(bills[i]==10)
            {
                if(arr[2]==0) return false;
                arr[1]=arr[1]+1;
                arr[2]=arr[2]-1;
            }
            if(bills[i]==20)
            {
                if(arr[2]==0) return false;
            if(arr[1]==0 && arr[2]==0) return false;
            if(arr[1]==0 && arr[2]<3) return false;
               if(arr[1]==0) 
               {
                   arr[2]=arr[2]-3;
               }
                else
                {
                    arr[1]=arr[1]-1;
                    arr[2]=arr[2]-1;
                }
    
                
            }
                
        }
        return true;
        
    }
};