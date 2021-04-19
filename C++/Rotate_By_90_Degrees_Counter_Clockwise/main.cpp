//https://binarysearch.com/problems/Rotate-by-90-Degrees-Counter-Clockwise
vector<vector<int>> solve(vector<vector<int>>& v) {
    int n = v.size();
    vector<vector<int>> ans(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans[n-1-j][i] = v[i][j];
        }
    }
    return ans;
}