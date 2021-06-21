//https://binarysearch.com/problems/Minimum-Starting-Nodes-to-Visit-Graph
vector<int> solve(vector<vector<int>>& edges) {
    int n = 0;
    for(auto x: edges){
        n = max({n, x[0], x[1]});
    }
    vector<int> ans;
    vector<int> deg(n+1);
    for(auto x: edges){
        deg[x[1]]++;
    }
    for(int i = 0; i <= n; i++){
        if(deg[i] == 0)
            ans.push_back(i);
    }
    return ans;
}