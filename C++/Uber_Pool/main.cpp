//https://binarysearch.com/problems/Uber-Pool
bool solve(vector<vector<int>>& trips, int capacity) {
    int n = trips.size();
    int m = 0;
    for(int i = 0; i < n; i++){
        m = max(m, trips[i][1]);
    }
    vector<int> p(m+1);
    for(int i = 0; i < n; i++){
        p[trips[i][0]] += trips[i][2];
        p[trips[i][1]] -= trips[i][2];
    }
    int sum = 0;
    vector<int> v(m+1);
    for(int i = 0; i <= m; i++){
        sum += p[i];
        v[i] = sum;
    }
    bool ok = true;
    for(int i = 0; i <= m; i++){
        if(v[i] > capacity)
            ok = false;
    }
    return ok;
}