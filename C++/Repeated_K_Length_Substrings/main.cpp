//https://binarysearch.com/problems/Repeated-K-Length-Substrings
int solve(string s, int k) {
    int n = s.length();
    string curr;
    for(int i = 0; i < k; i++){
        curr += s[i];
    }
    map<string, int> m;
    m[curr]++;
    for(int i = k; i < n; i++){
        curr += s[i];
        curr.erase(curr.begin());
        m[curr]++;
    }
    int ans = 0;
    for(auto x: m){
        if(x.second > 1)
            ans++;
    }
    return ans;
}