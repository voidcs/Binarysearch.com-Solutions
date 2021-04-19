//https://binarysearch.com/problems/Forest-Detection
bool solve(vector<vector<int>>& edges) {
    bool valid = 1;
    int n = 0;
    for(int i = 0; i < edges.size(); i++){
        n = max(n, edges[i][0]);
        n = max(n, edges[i][1]);
    }
    vector<vector<int>> adj(n+1);
    for(int i = 0; i < edges.size(); i++){
        int a = edges[i][0], b = edges[i][1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> vis(n+1, 0);

    function<void(int, int)> dfs = [&](int u, int par){
        vis[u] = 1;
        for(int c: adj[u]){
            if(!vis[c]){
                vis[c] = 1;
                dfs(c, u);
            }
            else{
                if(c != par)
                    valid = 0;
            }
        }
    };
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i, -1);
        }
    }
    return valid;
}