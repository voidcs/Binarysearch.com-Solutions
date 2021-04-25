//https://binarysearch.com/problems/Binary-Matrix-Leftmost-One
int solve(vector<vector<int>>& g) {
    if(!g.size() || !g[0].size()){
        return -1;
    }
    int n = g.size();
    int m = g[0].size();
    int ans = 1e9;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j]){
                ans = min(ans, j);
            }
        }
    }
    if(ans == 1e9)
        return -1;
    return ans;
}