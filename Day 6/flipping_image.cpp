class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        vector<vector<int>> img1(n,vector<int> (n,0));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                img1[i][j]=1^image[i][n-1-j];
        return img1;    
    }
};