//https://binarysearch.com/problems/Minimum-String
int solve(string s, string t) {
    map<char, int> m;
    for(int i = 0; i < s.length(); i++)
        m[s[i]]++;
        int ans = 0;
    for(int i = 0; i < t.length(); i++){
        if(m.count(t[i])){
            m[t[i]]--;
            if(m[t[i]] < 0)
            ans++;
                
        }
        else
            ans++;
    }
    return ans;
}