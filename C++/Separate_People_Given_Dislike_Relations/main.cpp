//https://binarysearch.com/problems/Separate-People-Given-Dislike-Relations
bool solve(int n, vector<vector<int>>& enemies) {
    vector<vector<int>> adj(n);
    vector<int> col(n, -1);
    for(auto x: enemies){
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    bool ans = 1;
    function<void(int, int)> dfs = [&](int u, int color){
        col[u] = color;
        for(int c: adj[u]){
            if(col[c] != -1){
                if(col[c] == col[u])
                    ans = 0;
            }
            else
                dfs(c, color^1);
        }
    };
    for(int i = 0; i < n; i++){
        if(col[i] == -1)
            dfs(i, 0);
    }
    return ans;
}