#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> g[100];
int visited[100];
int level[100];

void bfs(int source){
    queue<int> q;
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int current_vertex=q.front();
        cout<< current_vertex<<" ";
        q.pop();
        for(int i=0;i<g[current_vertex].size();i++){
            int child=g[current_vertex][i];
            if(!visited[child]){
                q.push(child);
                visited[child]=1;
                level[child]=level[current_vertex]+1;
            }
        }
        
    }
    cout<< " ";
}

int main(){
    int v,e;
    scanf("%d %d", &v, &e);
    for(int i=0;i<e;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for(int i=0;i<v;i++){
        for(int j=0;j<g[i].size();j++){
            cout<< g[i][j]<< " ";
        }
        cout <<" ";
    }

    bfs(1);

    for(int i=1;i<v+1;i++){
        printf("%d %d\n",i,level[i]);
    }
}

