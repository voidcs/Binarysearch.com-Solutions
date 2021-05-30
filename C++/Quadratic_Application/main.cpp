//https://binarysearch.com/problems/Quadratic-Application
vector<int> solve(vector<int>& v, int a, int b, int c) {
    vector<int> ans;
    for(auto x: v)
        ans.push_back((a*x*x) + (b*x) + c);
    sort(ans.begin(), ans.end());
    return ans;
}