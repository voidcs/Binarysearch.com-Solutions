//https://binarysearch.com/problems/Swap-Consecutive-Index-Pairs
vector<int> solve(vector<int>& v) {
    int n = v.size();
    for(int i = 0; i+2 < n; i+=4)
        swap(v[i], v[i+2]);
    for(int i = 1; i+2 < n; i+=4)
        swap(v[i], v[i+2]);
    return v;
}