//https://binarysearch.com/problems/N-Lexicographic-Integers
vector<int> solve(int n) {
    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 1);
    auto comp = [&](int x, int y){
        string a = to_string(x);
        string b = to_string(y);
        return a < b;
    };
    sort(ans.begin(), ans.end(), comp);
    return ans;
}