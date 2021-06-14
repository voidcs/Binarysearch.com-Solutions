//https://binarysearch.com/problems/Pascal's-Triangle
vector<int> solve(int n) {
    auto C = [&](int n, int k) {
        double res = 1;
        for (int i = 1; i <= k; ++i)
            res = res * (n - k + i) / i;
        return (int)(res + 0.01);
    };
    vector<int> ans(n+1);
    for(int i = 0; i <= n; i++){
        ans[i] = C(n, i);
    }
    return ans;
}