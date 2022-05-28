class Solution {
public:
    int missingNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int n=nums.size();
        int z;
        for(int i=0;i<n;++i)
        {
         if(nums[i]!=i)
         {
             z=i;
             break;
         
         }
        }
         int k=n;
        if(nums[nums.size()-1]!=k)
            return k;
        
        return z;
        
    }
};