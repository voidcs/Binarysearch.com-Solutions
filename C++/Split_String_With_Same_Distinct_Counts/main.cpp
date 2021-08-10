//https://binarysearch.com/problems/Split-String-with-Same-Distinct-Counts
int solve(string s) {
    vector<int> all(26), have(26);
    for(char c: s){
        all[c-'a']++;
    }
    int suffixSize = 0, prefixSize = 0;
    for(int i = 0; i < 26; i++)
        suffixSize += all[i] > 0;
    int ans = 0;
    for(char c: s){
        have[c-'a']++;
        if(have[c-'a'] == 1)
            prefixSize++;
        all[c-'a']--;
        if(all[c-'a'] == 0)
            suffixSize--;
        ans += prefixSize == suffixSize;
    }
    return ans;
}