//https://binarysearch.com/problems/Bounce
bool solve(vector<int>& a, int k) {
    int n = a.size();
    vector<int> vis(n, 0);
    vector<vector<int>> adj(n);
    for(int i = 0; i < n; i++){
        if(i - a[i] >= 0)
            adj[i].push_back(i-a[i]);
        if(i + a[i] < n)
            adj[i].push_back(i+a[i]);
    }
    function<void(int)> dfs = [&](int u){
        vis[u] = 1;
        for(int c: adj[u]){
            if(!vis[c]){
                vis[c] = 1;
                dfs(c);
            }
        }
    };
    dfs(k);
    return vis[n-1] == 1;
}