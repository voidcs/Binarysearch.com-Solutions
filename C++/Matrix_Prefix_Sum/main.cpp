//https://binarysearch.com/problems/Matrix-Prefix-Sum
vector<vector<int>> solve(vector<vector<int>>& g) {
    if(g.empty())
        return g;
    int n = g.size();
    int m = g[0].size();
    vector<vector<int>> ans(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans[i][j] += g[i][j];
            if(i)
                ans[i][j] += ans[i-1][j];
            if(j)
                ans[i][j] += ans[i][j-1];
            if(i && j)
                ans[i][j] -= ans[i-1][j-1];
        }
    }
    return ans;
}