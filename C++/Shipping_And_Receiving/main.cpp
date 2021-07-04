//https://binarysearch.com/problems/Shipping-and-Receiving
int solve(vector<vector<int>>& ports, vector<vector<int>>& shipments) {
    int n = ports.size();
    vector<vector<int>> g(n, vector<int>(n, 1e9));
    for(int i = 0; i < ports.size(); i++){
        for(auto x: ports[i]){
            g[i][x] = 1;
        }
    }
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }
    int ans = 0;
    for(auto x: shipments){
        if(g[x[0]][x[1]] != 1e9)
            ans += g[x[0]][x[1]];
    }
    return ans;

}