//https://binarysearch.com/problems/Connected-Cities
bool solve(int n, vector<vector<int>>& roads){
    bool ans = 1;
    unordered_set<int> s, s2;
    vector<vector<int>> adj(n), adj2(n);
    for(int i = 0; i < roads.size(); i++){
        int a = roads[i][0], b = roads[i][1];
        adj[a].push_back(b);
        adj2[b].push_back(a);
    }
    vector<int> vis(n+1, 0), vis2(n+1, 0);
    function<void(int)> dfs = [&](int u){
        s.insert(u);
        vis[u] = 1;
        for(int c: adj[u]){
            if(!vis[c]){
                vis[c] = 1;
                dfs(c);
            }
        }
    };

    function<void(int)> dfs2 = [&](int u){
        s.insert(u);
        vis[u] = 1;
        for(int c: adj2[u]){
            if(!vis[c]){
                vis[c] = 1;
                dfs2(c);
            }
        }
    };
    dfs(0);
    ans &= (s.size() == n);
    for(int i = 0; i <= n; i++)
        vis[i] = 0;
    s.clear();
    dfs2(0);
    ans &= (s.size() == n);
    return ans;
}