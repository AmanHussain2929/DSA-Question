class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        unordered_map<int,int> um;
        for(int i=0;i<numbers.size();i++)
        {
            if(um.find(target-numbers[i])!=um.end())
            {
                int index1=um[target-numbers[i]]+1;
                ans.push_back(index1);
                ans.push_back(i+1);
                break;
            }
            um[numbers[i]]=i;
        }
        return ans;
    }
};