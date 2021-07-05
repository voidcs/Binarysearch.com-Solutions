//https://binarysearch.com/problems/Stacks
int solve(vector<vector<int>>& v) {
    if(v.empty())
        return 0;
    int n = v.size();
    vector<set<int>> p(n);
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int x: v[i]){
            sum += x;
            p[i].insert(sum);
        }
    }
    int ans = 0;
    for(auto x: p[0]){
        bool ok = 1;
        for(int i = 1; i < n; i++){
            ok &= (p[i].count(x));
        }
        if(ok)
            ans = max(ans, x);
    }
    return ans;
}