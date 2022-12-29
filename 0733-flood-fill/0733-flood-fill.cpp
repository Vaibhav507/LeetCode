
class Solution {
public: 
    vector<vector<int>> floodFill(vector<vector<int>> image, int sr, int sc, int color) 
    {
        int prev = image[sr][sc];
        if (prev != color) 
            dfs(image, sr, sc, prev, color);
        return image;
    }

    void dfs(vector<vector<int>>& image, int r, int c, int prev, int color) 
    {
        if (image[r][c] == prev) 
        {
            image[r][c] = color;
            if (r >= 1)
                dfs(image, r-1, c, prev, color);
            if (c >= 1)
                dfs(image, r, c-1, prev, color);
            if (r+1 < image.size())
                dfs(image, r+1, c, prev, color);
            if (c+1 < image[0].size())
                dfs(image, r, c+1, prev, color);
        }
    }
};