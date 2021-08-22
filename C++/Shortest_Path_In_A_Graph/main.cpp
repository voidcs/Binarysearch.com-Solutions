//https://binarysearch.com/problems/Shortest-Path-in-a-Graph
int solve(vector<vector<int>>& edges, int start, int end) {
    int n = 0;
    for(auto x: edges){
        n = max({n, x[0], x[1]});
    }
    n++;
    int INF = 1e9;
    vector<int> dist(n, INF);
    vector<vector<array<int, 2>>> adj(n);
    for(auto x: edges){
        adj[x[0]].push_back({x[1], x[2]});
    }
    dist[start] = 0;
    priority_queue<array<int, 2>, vector<array<int, 2>>, greater<array<int, 2>>> pq;
    pq.push({0, start});
    while(pq.size()){
        int d = pq.top()[0];
        int u = pq.top()[1];
        pq.pop();
        if(d > dist[u])
            continue;
        for(auto c: adj[u]){
            if(d + c[1] < dist[c[0]]){
                dist[c[0]] = d + c[1];
                pq.push({dist[c[0]], c[0]});
            }
        }
    }
    if(dist[end] == INF)
        return -1;
    return dist[end];
}