//https://binarysearch.com/problems/Common-Reachable-Node
bool solve(vector<vector<int>>& edges, int a, int b) {
    int n = 0;
    bool ans = 0;
    for(int i = 0; i < edges.size(); i++){
        n = max(n, edges[i][0]);
        n = max(n, edges[i][1]);
    }
    n++;
    vector<vector<int>> adj(n);
    for(int i = 0; i < edges.size(); i++){
        int x = edges[i][0], y = edges[i][1];
        adj[y].push_back(x);
    }
    set<int> node1;
    vector<int> vis(n, 0);
    function<void(int)> dfs = [&](int u){
        vis[u] = 1;
        for(int c: adj[u]){
            if(!vis[c]){
                vis[c] = 1;
                dfs(c);
            }
        }
    };
    dfs(a);
    for(int i = 0; i < n; i++){
        if(vis[i])
            node1.insert(i);
    }
    vis = vector<int> (n, 0);
    dfs(b);
    for(int i = 0; i < n; i++){
        if(vis[i]){
            if(node1.count(i))
                ans = 1;
        }
    }
    return ans;
}