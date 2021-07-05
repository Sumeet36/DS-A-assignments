class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int r=img.size();
        int c=img[0].size();
        vector<vector<int>> img1(r,vector<int>(c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int count=0;
                int temp=0;
                for(int m=i-1;m<i+2;m++)
                    for(int n=j-1;n<j+2;n++)
                    {   
                        if(m>=0&&m<r&&n>=0&&n<c)
                        {
                            temp+=img[m][n];
                            count++;
                        }
                    } 
                img1[i][j]=temp/count;
            }
        }
        return img1;
    }
};