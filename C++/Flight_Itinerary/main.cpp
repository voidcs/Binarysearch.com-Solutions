//https://binarysearch.com/problems/Flight-Itinerary
vector<string> solve(vector<vector<string>>& g) {
    map<string, int> inDegree;
    map<string, vector<string>> adj;
    int c = 0;
    for(vector<string> x: g){
        adj[x[0]].push_back(x[1]);
        inDegree[x[0]];
        inDegree[x[1]]++;
    }
    queue<string> q;
    vector<string> ans;
    for(auto x: inDegree){
        if(x.second == 0)
            q.push(x.first);
    }
    while(q.size()){
        string u = q.front();
        q.pop();
        ans.push_back(u);
        for(auto c: adj[u]){
            inDegree[c]--;
            if(inDegree[c] == 0)
                q.push(c);
        }
    }
    return ans;
}




