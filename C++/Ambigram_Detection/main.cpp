//https://binarysearch.com/problems/Ambigram-Detection
bool solve(string s, vector<vector<string>>& adj) {
    int n = adj.size();
    vector<int> par(26);
    iota(par.begin(), par.end(), 0);
    function<int(int)> find = [&](int x){
        return (x == par[x]) ? x : par[x] = find(par[x]);
    };
    auto unite = [&](int x, int y){
        x = find(x), y = find(y);
        if(x != y){
            par[x] = y;
        }
    };
    for(int i = 0; i < n; i++){
        //Zero index the letters
        int x = adj[i][0][0] - 'a';
        int y = adj[i][1][0] - 'a';
        unite(x, y);
    }
    for(char &c: s){
        c = 'a' + find(c - 'a');
    }
    string r = s;
    reverse(r.begin(), r.end());
    return r == s;
}