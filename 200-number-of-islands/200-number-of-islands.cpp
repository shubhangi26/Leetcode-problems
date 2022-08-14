class Solution {
private:
     void dfs (int row,int col ,vector<vector<char>>& grid){
      if(row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size())
            return;
        // return if current position is of water or is already visited
        if(grid[row][col] == '#' || grid[row][col] == '0')
            return;
        
        // mark the current as visited
        grid[row][col]='#';  //marking as visited
                dfs(row+1,col,grid);
                dfs(row-1,col,grid);
                dfs(row,col+1,grid);
                dfs(row,col-1,grid);
    
    }
public:
    int numIslands(vector<vector<char>>& grid) {
      int m = grid.size();
      int n = grid[0].size();  
   
     int count = 0;
         for(int i=0;i<m;i++){          //i,j is row and col
            for (int j = 0;j<n;j++){
              if(grid[i][j]=='1'){  
                 dfs(i,j,grid);  
                 count++; 
             } 
            }
         } 
         return count;
    }
};