class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[nums.size()-1];
        int ans=min(a,b);
        while(ans)
        {
            if(a%ans==0 && b%ans==0)  break;
            ans--;
        }
        return ans;
        
    }
};