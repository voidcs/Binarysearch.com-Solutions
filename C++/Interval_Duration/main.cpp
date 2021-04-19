//https://binarysearch.com/problems/Interval-Duration
int solve(vector<vector<int>>& a) {
    if(a.size() == 0)
        return 0;
    sort(a.begin(), a.end());
    int start = a[0][0], end = a[0][1];
    vector<array<int, 2>> v;
    for(int i = 1; i < a.size(); i++){
        int l = a[i][0], r = a[i][1];
        if(l > end){
            v.push_back({start, end});
            start = l;
        }
        end = max(end, r);
    }
    v.push_back({start, end});
    int ans = 0;
    for(auto x: v){
        cout<<x[0]<<" "<<x[1]<<endl;
    }
    for(int i = 0; i < v.size(); i++){
        ans += v[i][1] - v[i][0] + 1;
    }
    return ans;
}