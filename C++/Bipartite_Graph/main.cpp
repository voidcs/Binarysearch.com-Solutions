//https://binarysearch.com/problems/Bipartite-Graph
bool solve(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> color(n, -1);
    vector<int> vis(n, 0);;
    function<bool(int, int, int)> dfs = [&](int u, int par, int col){
        vis[u] = 1;
        color[u] = col;
        bool check = true;
        for(int c: adj[u]){
            if(c != par && vis[c]){
                if(color[c] == col)
                    return false;
            }
            if(!vis[c]){
                vis[c] = 1;
                check = dfs(c, u, col^1);
            }
        }
        return check;
    };
    bool ans = 1;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            bool flag = dfs(i, -1, 0);
            if(!flag){
                ans = 0;
                break;
            }
        }
    }
    return ans;
}