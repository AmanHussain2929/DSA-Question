class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       int m=heights.size()-2;
        while(m>=0)
        {
            int e=0;
            int f=1;
            while(e<=m)
            {
                if(heights[e]<heights[f])
                {
                    swap(heights[e],heights[f]);
                    swap(names[e],names[f]);
                }
                e++;
                f++;
            }
            m--;
        }
        return names;
    }
};