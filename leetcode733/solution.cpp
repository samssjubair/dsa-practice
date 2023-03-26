#include<iostream>
#include<vector>
using namespace std;

void dfs(int i,int j, int oldColor,int newColor,vector<vector<int> >& image){
    int row=image.size();
    int col=image[0].size();
    if(i<0 || j<0) return;
    if(i>=row ||j>=col) return ;

    if(image[i][j]!=oldColor) return;

    image[i][j]=newColor;
    
    dfs(i,j+1,oldColor,newColor,image);
    dfs(i-1,j,oldColor,newColor,image);
    dfs(i+1,j,oldColor,newColor,image);
    dfs(i,j-1,oldColor,newColor,image);
}

vector<vector<int> > floodFill(vector<vector<int> >& image, int sr, int sc, int color) {
    int primaryColor=image[sr][sc];
    if(primaryColor!=color){
            dfs(sr,sc,primaryColor,color,image);
    }
    return image;

}

int main(){
    int sc,sr,color;
    vector<vector<int> > image;
    cin>>sc>>sr>>color;
    for(int i=0;i<3;i++){
        vector<int> row;
        for(int j=0;j<3;j++){
            int val;
            cin>>val;
            row.push_back(val);
        }
        image.push_back(row);
    }
    floodFill(image,sc,sr,color);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
}