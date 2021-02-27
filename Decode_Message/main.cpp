//https://binarysearch.com/problems/Decode-Message
int solve(string s) {
    int n = s.size();
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        if(s[i] != '0')
            dp[i+1] += dp[i];
        if(i < n-1){
            if(s[i] == '1' || (s[i] == '2' && s[i+1] <= '6'))
                dp[i+2] += dp[i];
        }
    }
    return dp[n];
}