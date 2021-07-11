//https://binarysearch.com/problems/Unlock-Rooms
bool solve(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<bool> vis(n);
    function<void(int)> dfs = [&](int u){
        vis[u] = 1;
        for(int c: adj[u]){
            if(!vis[c]){
                vis[c] = 1;
                dfs(c);
            }
        }
    };
    dfs(0);
    bool ok = 1;
    for(int i = 0; i < n; i++)
        ok &= (vis[i] == 1);
    return ok;
}