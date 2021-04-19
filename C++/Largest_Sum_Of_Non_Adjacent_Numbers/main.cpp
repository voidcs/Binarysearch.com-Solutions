https://binarysearch.com/problems/Largest-Sum-of-Non-Adjacent-Numbers
int solve(vector<int>& a) {
    int n = a.size();
    int ans = 0, sum = 0;
    vector<int> dp(n+1, 0);
    for(int i = 0; i < n; i++){
        dp[i] = max(dp[i], a[i]);
        if(i == 2){
            dp[i] = max(dp[i], dp[i] + dp[i-2]);
        }
        else if(i >= 3){
            dp[i] = max({dp[i], dp[i] + dp[i-2], dp[i] + dp[i-3]});
        }
        
    }
    for(int i = 0; i < n; i++)
        ans = max(ans, dp[i]);
    return ans;
}