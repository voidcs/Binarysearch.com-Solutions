//https://binarysearch.com/problems/String-Isomorphism
bool solve(string s, string t) {
    map<char, int> m, n;
    bool flag = 1;
    for(int i = 0; i < s.length(); i++){
        if(m.count(s[i])){
            if(t[i] != m[s[i]])
                flag = 0;
        }
        if(n.count(t[i])){
            if(s[i] != n[t[i]])
                flag = 0;
        }
        m[s[i]] = t[i];
        n[t[i]] = s[i];
    }
    return flag;
}