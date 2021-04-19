//https://binarysearch.com/problems/Removing-Parentheses
int solve(string s) {
    int n = s.length();
    int x = 0, y = 0;
    int bal = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '(')
            bal++;
        else
            bal--;
        if(bal < 0)
            x = max(x, -bal);
    }
    bal = 0;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == ')')
            bal++;
        else
            bal--;
        if(bal < 0)
            y = max(y, -bal);
    }
    return x + y;
}