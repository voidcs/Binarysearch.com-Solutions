//https://binarysearch.com/problems/Rookie-Mistake
bool solve(string s) {
    int n = s.length();
    int start = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            start = i;
            break;
        }
    }
    int l = start, r = start;
    while(l >= 0 && s[l] != 'B')
        l--;
    while(r < n && s[r] != 'B')
        r++;
    return (l == -1 || r == n);
}