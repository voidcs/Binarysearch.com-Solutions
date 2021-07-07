//https://binarysearch.com/problems/Longest-Alternating-Subsequence
int solve(vector<int>& v) {
    int n = v.size();
    int dp[n+1][2];
    for(int i = 0; i <= n; i++)
        dp[i][0] = dp[i][1] = 0;
    dp[0][0] = dp[0][1] = 1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            dp[i][1] = max(dp[i][1], dp[j][1]);
            dp[i][0] = max(dp[i][0], dp[j][0]);
            if(v[i] > v[j]){
                dp[i][1] = max(dp[i][1], dp[j][0] + 1);
            }
            else if(v[i] < v[j]){
                dp[i][0] = max(dp[i][0], dp[j][1] + 1);
            }
        }
    }
    return n <= 1 ? n : max(dp[n-1][0], dp[n-1][1]);
}