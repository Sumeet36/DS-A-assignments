class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size();
        int c=grid[0].size();
        int x=0,t=2;
        vector<int> temp(2*r*c);
        while(t--){
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                temp[x++]=grid[i][j];
        }
        k=(r*c)-k%(r*c);
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                grid[i][j]=temp[k++];
        return grid;
    }
};