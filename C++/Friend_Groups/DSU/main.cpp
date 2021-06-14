//https://binarysearch.com/problems/Friend-Groups
int solve(vector<vector<int>>& adj) {
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
    set<int> ans;
    for(int i = 0; i < n; i++){
        ans.insert(find(i));
    }
    return ans.size();
}