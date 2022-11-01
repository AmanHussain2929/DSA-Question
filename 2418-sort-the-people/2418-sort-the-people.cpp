class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
    int y=1;
        string s;
  while(y<=n-1)
  {
        int num=heights[y];
           s=names[y];
       int j=y-1;
     while(j>=0 && heights[j]<num)
     {
              heights[j+1]=heights[j];
              names[j+1]=names[j];
          j--;
     }
      heights[j+1]=num;
      names[j+1]=s;
      y++;
  }
        return names;
    
    }
};