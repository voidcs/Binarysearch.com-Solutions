//https://binarysearch.com/problems/Course-Scheduling
bool solve(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> deg(n+1, 0);
    for(int i = 0; i < n; i++){
        for(int c: adj[i]){
            deg[c]++;
        }
    }
    queue<int> q;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(deg[i] == 0){
            q.push(i);
            ans.push_back(i);
        }
    }

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int c: adj[u]){
            deg[c]--;
            if(deg[c] == 0){
                q.push(c);
                ans.push_back(c);
            }
        }
    }
    return ans.size() == n;
}