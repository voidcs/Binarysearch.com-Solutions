//https://binarysearch.com/problems/Gene-Mutation-Groups
int solve(vector<string>& genes) {
    int n = genes.size();
    unordered_map<string, int> id;
    unordered_set<string> have;
    for(int i = 0; i < n; i++){
        have.insert(genes[i]);
        id[genes[i]] = i;
    }
    vector<int> par(n);
    iota(par.begin(), par.end(), 0);

    function<int(int)> find = [&](int x){
        return (par[x] == x) ? x : par[x] = find(par[x]);
    };
    auto unite = [&](int a, int b){
        a = find(a), b = find(b);
        if(a != b)
            par[a] = b;
    };
    vector<char> change = {'A', 'C', 'G', 'T'};
    for(string s: genes){
        for(int i = 0; i < s.length(); i++){
            for(int j = 0; j < 4; j++){
                if(change[j] == s[i])
                    continue;
                string t = s;
                t[i] = change[j];
                if(have.count(t)){
                    int x = id[s], y = id[t];
                    if(find(x) != find(y))
                        unite(x, y);
                }

            }
        }
    }
    int ans = 0;
    vector<bool> vis(n);
    for(int i = 0; i < n; i++){
        int x = find(i);
        if(!vis[x]){
            vis[x] = 1;
            ans++;
        }
    }

    return ans;
}