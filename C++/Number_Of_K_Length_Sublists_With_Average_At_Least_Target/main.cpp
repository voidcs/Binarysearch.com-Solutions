//https://binarysearch.com/problems/Number-of-K-Length-Sublists-with-Average-at-Least-Target
int solve(vector<int>& v, int k, int target) {
    int n = v.size();
    vector<int> p(n+1);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        p[i+1] = sum;
    }
    int ans = 0;
    for(int i = k; i <= n; i++){
        int x = p[i] - p[i-k];
        ans += (x/k) >= target;
    }
    return ans;
}