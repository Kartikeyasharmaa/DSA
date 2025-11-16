class Solution {
public:
    bool searchMatrix(vector<vector<int>>& vec, int target) {
        int row=vec.size(),colm=vec[0].size();
        int i=0;
        int j=colm-1;
        int x;
        while(i<row && j>=0){
            x=vec[i][j];
            if(x==target) return true;
            else if(x<target) i++;
            else j--;
        }
        return false;
    }
};