class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        vector<vector<string>> ans;
        string g="";
        vector<string> temp;
        for(int i=0;i<searchWord.length();i++)
        {
            g+=searchWord[i];
              temp.clear();
            for(int j=0;j<products.size();j++)
            {
                if(products[j].substr(0,g.length())==g)
                temp.push_back(products[j]);
                if(temp.size()==3) break;
                
            }
            ans.push_back(temp);
            
        }
        return ans;
    }
};