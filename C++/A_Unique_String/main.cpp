//https://binarysearch.com/problems/A-Unique-String
bool solve(string s) {
    bool ok = 1;
    vector<int> cnt(26);
    for(int i = 0; i < s.length(); i++){
        int j = s[i] - 'a';
        if(cnt[j] == 1)
            ok = 0;
        cnt[j] = 1;
    }
    return ok;
}