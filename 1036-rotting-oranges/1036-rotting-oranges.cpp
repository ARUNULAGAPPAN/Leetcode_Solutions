class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       int r = grid.size();
       int c= grid[0].size();

       queue<pair<int,int>>q;//to store rotten orange
       int fresh =0;
       for(int i=0;i<r;i++)
       {
        for(int j=0;j<c;j++)
        {
            if(grid[i][j]==2)
            {
                q.push({i,j});
            }
            else if(grid[i][j]==1)
            {
                fresh++;
            }
        }
       }

       if(fresh==0)return 0;
      vector<pair<int,int>>directions={{-1,0},{1,0},{0,-1},{0,1}};
      int minutes = 0;
      while(!q.empty())
      {
        int size = q.size();
        bool rotted = false;

        for(int i=0;i<size;i++)
        {
            auto[x,y]=q.front(); q.pop();
            for(auto[dx,dy]:directions)
            {
                int nx=x+dx;
                int ny = y+dy;
                if(nx>=0 && nx<r && ny >=0 && ny <c && grid[nx][ny]==1)
                {
                    grid[nx][ny]=2;
                    fresh--;
                    q.push({nx,ny});
                    rotted=true;
                }
            }
        }
        if(rotted) minutes++;
      }
      return fresh==0?minutes:-1;
    }
    
};