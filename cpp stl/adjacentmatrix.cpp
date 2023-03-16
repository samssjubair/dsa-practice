#include <iostream>
using namespace std;

int main(){
    int n;
    int matrix[100][100];
    cout<<"Enter number of nodes\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    // cout<<n+1<<endl;
    return 0;
}