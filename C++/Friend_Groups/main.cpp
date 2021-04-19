//https://binarysearch.com/problems/Friend-Groups
int solve(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> vis(n+1, 0);
    int ans = 0;

    function<void(int)> dfs = [&](int u){
        vis[u] = 1;
        for(int c: adj[u]){
            if(!vis[c]){
                vis[c] = 1;
                dfs(c);
            }
        }
    };
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            vis[i] = 1;
            dfs(i);
            ans++;
        }
    }
    return ans;
}