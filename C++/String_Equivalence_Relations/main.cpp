//https://binarysearch.com/problems/String-Equivalence-Relations
string solve(string a, string b, string target) {
    vector<int> par(26);
    iota(par.begin(), par.end(), 0);
    int n = a.length();
    function<int(int)> find = [&](int x){
        return (x == par[x]) ? x : par[x] = find(par[x]);
    };
    auto unite = [&](int x, int y){
        x = find(x), y = find(y);
        if(x != y){
            if(x > y)
                swap(x, y);
            par[y] = x;
        }
    };
    for(int i = 0; i < n; i++){
        unite(a[i]-'a', b[i]-'a');
    }
    string ans;
    for(char c: target){
        ans += 'a' + find(c-'a');
    }
    return ans;
}