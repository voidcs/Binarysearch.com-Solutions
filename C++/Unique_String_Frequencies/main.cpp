//https://binarysearch.com/problems/Unique-String-Frequencies
int solve(string s) {
    unordered_map<char, int> m;
    for(char c: s){
        m[c]++;
    }
    int ans = 0;
    vector<int> v;
    for(auto x: m)
        v.push_back(x.second);
    
    sort(v.rbegin(), v.rend());
    unordered_map<int, int> freq;
    for(auto x: v)
        freq[x]++;
    for(int x: v){
        while(freq[x] > 1 && x > 0){
            ans++;
            freq[x--]--;
            freq[x]++;
        }
    }
    return ans;
}