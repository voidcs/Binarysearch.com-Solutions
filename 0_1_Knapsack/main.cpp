//https://binarysearch.com/problems/0-1-Knapsack
int solve(vector<int>& weights, vector<int>& values, int capacity) {
    int n = weights.size();
    vector<int> dp(capacity+1, 0);
    for(int i = 0; i < n; i++){
        for(int j = capacity; j >= 0; j--){
            if(j >= weights[i])
                dp[j] = max(dp[j], dp[j-weights[i]] + values[i]);
        }
    }
    return dp[capacity];
}