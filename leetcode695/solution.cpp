    #include <iostream>
    #include <vector>
    using namespace std;
    
    int dfs(int i,int j,vector<vector<int> >& grid,int row, int column){
        
        if(i<0 || j<0 || i>=row || j>=column){
            return 0;
        }
        if(grid[i][j]==1) {
            grid[i][j]=2;
            return (1+ dfs(i+1,j,grid,row,column)+dfs(i-1,j,grid,row,column)+dfs(i,j+1,grid,row,column)+dfs(i,j-1,grid,row,column));
        }
        else return 0;
    }

    int maxAreaOfIsland(vector<vector<int> > & grid) {
        int row=grid.size();
        int column= grid[0].size();
        int maxArea=0;
        // vector<vector<bool>> visited;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(grid[i][j]==1){
                    maxArea= max(maxArea,dfs(i,j,grid,row,column));
                }
            }
        }
        return maxArea;
    }

    int main(){
        int row,column;
        cin>>row>>column;
        vector<vector<int> > grid(row,vector<int>(column));
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cin>>grid[i][j];
            }
        }
        cout<<maxAreaOfIsland(grid)<<endl;
    }