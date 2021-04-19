//https://binarysearch.com/problems/Largest-Anagram-Group
int solve(vector<string>& words) {
    map<string, int> m;
    for(int i = 0; i < words.size(); i++){
        string s = words[i];
        sort(s.begin(), s.end());
        m[s]++;
    }
    int ans = 0;
    for(auto x: m){
        ans = max(ans, x.second);
    }
    return ans;
}