//https://binarysearch.com/problems/Direct-Closure
vector<vector<int>> solve(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> par(n);
    iota(par.begin(), par.end(), 0);
    function<int(int)> find = [&](int x){
        return (x == par[x]) ? x : par[x] = find(par[x]);
    };
    auto unite = [&](int x, int y){
        x = find(x), y = find(y);
        if(x != y){
            par[x] = y;
        }
    };
    for(int i = 0; i < n; i++){
        for(int x: adj[i]){
            unite(i, x);
        }
    }

    vector<vector<int>> ans(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(find(i) == find(j))
                ans[i][j] = 1;
        }
    }
    return ans;
}