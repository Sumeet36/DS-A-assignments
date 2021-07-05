class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if((mat.size())*(mat[0].size())==(r*c))
        {
            vector<int> new1;
            vector<vector<int>> new2(r , vector<int> (c, 0));
            for(int i=0;i<mat.size();i++)
                for(int j=0;j<mat[0].size();j++)
                    new1.push_back(mat[i][j]);
            int k=0;
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    new2[i][j]=new1[k++];
            return new2;
        }
        return mat;
        
    }
};