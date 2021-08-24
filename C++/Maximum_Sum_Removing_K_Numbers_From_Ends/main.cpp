//https://binarysearch.com/problems/Maximum-Sum-Removing-K-Numbers-From-Ends
int solve(vector<int>& v, int k) {
    int n = v.size();
    vector<int> p(n+1);
    int prefixSum = 0;
    for(int i = 0; i < n; i++){
        prefixSum += v[i];
        p[i+1] = prefixSum;
    }
    int ans = -1e9;
    for(int i = 0; i <= k; i++){
        int l = p[i];
        int r = p[n] - p[n-k+i];
        ans = max(ans, l + r);
    }
    if(k == 0)
        return 0;
    return ans;
}