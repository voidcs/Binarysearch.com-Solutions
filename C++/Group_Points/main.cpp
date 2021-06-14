//https://binarysearch.com/problems/Group-Points
int solve(vector<vector<int>>& points, int k) {
    int n = points.size();
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
        for(int j = i+1; j < n; j++){
            int a = points[i][0] - points[j][0];
            int b = points[i][1] - points[j][1];
            if((a*a) + (b*b) <= k*k)
                unite(i, j);
        }
    }
    set<int> ans;
    for(int i = 0; i < n; i++){
        ans.insert(find(i));
    }
    return ans.size();
}