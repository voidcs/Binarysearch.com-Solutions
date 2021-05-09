int solve(vector<int>& v, int k) {
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        if(k >= v[i]){
            ans++;
            k -= v[i];
        }
    }
    return ans;
}