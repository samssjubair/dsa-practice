
#include <iostream>
#include <vector>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1,INT_MAX-10);
    dp[0]=0;
    for(int i=1;i<=amount;i++){
        for(int c=0;c<coins.size();c++){
            if(i>=coins[c]){
                dp[i]= min(dp[i],dp[i-coins[c]]+1);
            }
        }
    }
    return dp[amount]>amount? -1 : dp[amount];
}

int main(){
    int n;
    cin>>n;
    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int amount;
    cin>>amount;
    cout<<coinChange(coins,amount)<<endl;
}