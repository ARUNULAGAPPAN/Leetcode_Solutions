class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)
        {
            return image;
        }
        fill(image,sr,sc,image[sr][sc],color);
        return image;
    }
    void fill(vector<vector<int>>&image,int sr, int sc, int color, int newcolor)
    {
        if(sr<0 || sr>=image.size()|| sc<0 || sc>=image[0].size()||image[sr][sc] != color)
        {
            return;
        }
        image[sr][sc]=newcolor;//important step
        fill(image, sr+1,sc,color,newcolor);
        fill(image, sr,sc+1,color,newcolor);
        fill(image, sr-1,sc,color,newcolor);
        fill(image, sr,sc-1,color,newcolor);
    }
};