//https://binarysearch.com/problems/Generate-Primes
vector<int> solve(int n) {
    vector<int> ans;
    vector<bool> vis(n+1, 0);
    for(int i = 2; i <= n; i++){
        if(!vis[i]){
            ans.push_back(i);
            for(int j = i*i; j <= n; j += i)
                vis[j] = 1;
        }
    }
    return ans;
}