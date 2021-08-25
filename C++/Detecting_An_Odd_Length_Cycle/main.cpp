//https://binarysearch.com/problems/Detecting-an-Odd-Length-Cycle
bool solve(vector<vector<int>>& adj) {
    const int INF = 1e9;
    int n = adj.size();
    vector<int> dist(n, INF), vis(n);
    dist[0] = 0;
    bool ans = 0;
    function<void(int, int)> dfs = [&](int u, int par){
        vis[u] = 1;
        for(int c: adj[u]){
            if(!vis[c]){
                dist[c] = dist[u]+1;
                dfs(c, u);
            }
            else if(c != par){
                if(dist[c]%2 == dist[u]%2)
                    ans = 1;
            }
        }
    };
    for(int i = 0; i < n; i++){
        if(!vis[i])
            dfs(i, -1);
    }
    return ans;
}