https://binarysearch.com/problems/No-New-Friends
bool solve(int n, vector<vector<int>>& friends) {
    vector<set<int>> adj(n);
    for(int i = 0; i < friends.size(); i++){
        int a = friends[i][0];
        int b = friends[i][1];
        adj[a].insert(b);
        adj[b].insert(a);
    }
    int flag = 1;
    for(int i = 0; i < n; i++){
        if(adj[i].size() < 1)
            flag = 0;
    }
    return flag;
}