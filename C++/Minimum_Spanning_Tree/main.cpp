//https://binarysearch.com/problems/Minimum-Spanning-Tree
bool solve(vector<vector<int>>& edges, int a, int b) {
    int n = edges.size();
    int m;
    for(auto x: edges){
        m = max({m, x[0], x[1]});
    } 
    m++;
    sort(edges.begin(), edges.end(), [](vector<int> a, vector<int> b){
        return a[2] < b[2];
    });
    vector<int> par(m, -1);
    function<int(int)> find = [&](int x){
        return (par[x] < 0) ? x : par[x] = find(par[x]);
    };
    auto unite = [&](int x, int y){
        x = find(x), y = find(y);
        if(par[x] > par[y])
            swap(x, y);
        if(x != y){
            par[y] = x;
        }
    };
    int mst = 0;
    for(int i = 0; i < n; i++){
        if(find(edges[i][0]) != find(edges[i][1])){
            unite(edges[i][0], edges[i][1]);
            mst += edges[i][2];
        }
    }
    par = vector<int>(m, -1);
    if(a > b)
        swap(a, b);
    bool has = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(edges[i][0] > edges[i][1])
            swap(edges[i][0], edges[i][1]);
        if(a == edges[i][0] && b == edges[i][1]){
            has = 1;
            unite(a, b);
            ans += edges[i][2];
            break;
        }
    }
    if(!has)
        return false;
    for(int i = 0; i < n; i++){
        if(find(edges[i][0]) != find(edges[i][1])){
            unite(edges[i][0], edges[i][1]);
            ans += edges[i][2];
        }
    }
    return ans == mst;
}