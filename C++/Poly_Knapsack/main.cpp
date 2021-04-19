//https://binarysearch.com/problems/Poly-Knapsack
int solve(vector<int>& weights, vector<int>& values, int capacity) {
    int n = capacity;
    int m = weights.size();
    vector<int> dp(n+1, 0);
    for(int i = 0; i < m; i++){
        for(int j = 0; j <= n; j++){
            if(j >= weights[i]){
                dp[j] = max(dp[j], dp[j-weights[i]] + values[i]);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i <= n; i++)
        ans = max(ans, dp[i]);
    return ans;
}