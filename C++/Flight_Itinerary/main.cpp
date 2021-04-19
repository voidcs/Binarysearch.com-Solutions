//https://binarysearch.com/problems/Flight-Itinerary
vector<string> solve(vector<vector<string>>& flights) {
    unordered_map<string, int> m;
    unordered_map<int, string> name;
    int id = 0;
    for(int i = 0; i < flights.size(); i++){
        string a = flights[i][0], b = flights[i][1];
        if(!m.count(a)){
            m[a] = id;
            name[id] = a;
            id++;
        }
        if(!m.count(b)){
            m[b] = id;
            name[id] = b;
            id++;
        }
    }
    vector<vector<int>> adj(id);
    vector<int> deg(id, 0);
    for(int i = 0; i < flights.size(); i++){
        string a = flights[i][0], b = flights[i][1];
        adj[m[b]].push_back(m[a]);
        deg[m[a]]++;
    }
    vector<string> ans(id);
    int index = 0;
    stack<int> s;
    for(int i = 0; i < adj.size(); i++){
        if(deg[i] == 0)
            s.push(i);
    }
    while(!s.empty()){
        int u = s.top();
        s.pop();
        ans[index] = name[u];
        index++;
        for(int c: adj[u]){
            deg[c]--;
            if(deg[c] == 0)
                s.push(c);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}