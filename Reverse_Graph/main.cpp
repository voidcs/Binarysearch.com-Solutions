https://binarysearch.com/problems/Reverse-Graph
vector<vector<int>> solve(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<vector<int>> ans(n);
    for(int i = 0; i < n; i++){
        for(int c: adj[i]){
            ans[c].push_back(i);
        }
    }
    for(int i = 0; i < n; i++)
        sort(adj[i].begin(), adj[i].end());
    return ans;
}