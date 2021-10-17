//https://binarysearch.com/problems/Interleaved-String
string solve(string s0, string s1) {
    string ans;
    int n = s0.length(), m = s1.length();
    int i = 0, j = 0;
    while(i < n || j < m){
        if(i < n)
            ans += s0[i++];
        if(j < m)
            ans += s1[j++];
    }
    return ans;
}