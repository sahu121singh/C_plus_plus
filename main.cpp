#include<bits/stdc++.h>
using namespace std;
int memo[1001][1001];

int fun(int val[], int w[], int n, int wt){
    if(n==0 || wt == 0){
        return 0;
    }
    if(memo[n][wt] != 0){
        return memo[n][wt];
    }
    if(w[n-1] <= wt){
        memo[n][wt] = max(val[n-1] + fun(val, w, n-1, wt-w[n-1]), fun(val, w, n-1, wt));
    }
    else{
        memo[n][wt] = fun(val, w, n-1, wt);
    }
    return memo[n][wt];
}

int main(){
    int w[4] = {2, 3, 4, 5};
    int val[4] = {1, 2, 5, 6};
    memset(memo, 0, sizeof(memo));
    cout<<fun(val, w, 4, 8)<<endl<<endl;
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j <= 8; j++){
            cout<<memo[i][j]<<" ";
        }
        cout<<endl;
    }
}