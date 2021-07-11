//https://binarysearch.com/problems/Strictly-Alternating-List
bool solve(vector<int>& v) {
    int n = v.size();
    bool ok = (v[1] > v[0]);
    for(int i = 1; i < n; i++)
        ok &= (v[i] != v[i-1]);
    return ok;
}