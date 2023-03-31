#include<iostream>
#include<vector>
using namespace std;



void dfs(int i,int j,int row, int column,vector<vector<char> >& grid){
    if(i<0 || j<0 || i>=row || j>=column) return ;
    if(grid[i][j]=='0') return;
    grid[i][j]='0';
    dfs(i+1,j,row,column, grid);
    dfs(i,j+1,row,column, grid);
    dfs(i-1,j,row,column, grid);
    dfs(i,j-1,row,column, grid);
}

int numIslands(vector<vector<char> >& grid) {
    int row= grid.size();
    int column= grid[0].size();
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(grid[i][j]=='1'){
                count++;
                dfs(i,j, row, column, grid);
                
            }
        }
    }
    return count;
}

int main(){
    int row,column;
    cin>>row>>column;
    // cin.ignore(); 
    vector<vector<char> > grid(row,vector<char>(column));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            char c;
            cin >> c;
            grid[i][j] = c;
        }
    }
    cout<<numIslands(grid)<<endl;
}

//  '1' '1' '0' '0' '0' 
//   '1' '1' '0' '0' '0'
//   '0' '0' '1' '0' '0' 
//   '0' '0' '0' '1' '1'