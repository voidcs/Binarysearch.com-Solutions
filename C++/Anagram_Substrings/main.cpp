//https://binarysearch.com/problems/Anagram-Substrings
int solve(string s0, string s1) {
    vector<int> have(26), need(26);
    for(char c: s0)
        need[c-'a']++;
    int l = 0, ans = 0;
    for(int r = 0; r < s1.length(); r++){
        have[s1[r]-'a']++;
        if(r - l + 1 > s0.length()){
            have[s1[l]-'a']--;
            l++;
        }
        if(have == need)
            ans++;
    }
    return ans;
}