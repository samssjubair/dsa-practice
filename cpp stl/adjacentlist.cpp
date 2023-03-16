#include <iostream>
#include <vector>
using namespace std;

int main(){
    int e,n;
    vector<int> edges[100];
    vector<int> cost[100];
    cout<<"Enter no of nodes and edges\n";
    scanf("%d %d",&e, &n);

    //unidirectional
    // for(int i=0;i<e;i++){
    //     int x,y;
    //     scanf("%d %d",&x,&y);
    //     edges[x].push_back(y);
    //     edges[y].push_back(x);
    //     cost[x].push_back(1);
    //     cost[y].push_back(1);
    // }

    //bidirectional
    // for(int i=0;i<e;i++){
    //     int x,y;
    //     scanf("%d %d",&x,&y);
    //     edges[x].push_back(y);
    //     // edges[y].push_back(x);
    //     cost[x].push_back(1);
    //     // cost[y].push_back(1);
    // }

    //weighted graph
    // for(int i=0;i<e;i++){
    //     int x,y,w;
    //     scanf("%d %d %d",&x,&y,&w);
    //     edges[x].push_back(y);
    //     cost[x].push_back(w);
    // }

    //indegree outdegree
    vector<int> indegree[100];
    vector<int> outdegree[100];
    for(int i=0;i<e;i++){
        int x,y,w;
        scanf("%d %d %d",&x,&y,&w);
        outdegree[x].push_back(y);
        indegree[y].push_back(x);
        cost[x].push_back(w);
        // cost[y].push_back(w);
    }

    cout<<"Out degree"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<outdegree[i].size();j++){
            cout<<outdegree[i][j];
        }
        cout<<endl;
    }

    cout<<"In degree"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<indegree[i].size();j++){
            cout<<indegree[i][j];
        }
        cout<<endl;
    }
    return 0;
}

