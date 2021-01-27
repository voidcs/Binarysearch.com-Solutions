//https://binarysearch.com/problems/Length-of-Longest-Balanced-Subsequence
int solve(string s) {
    int open = 0, close = 0;
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(')
            open++;
        else
            close++;

        if(open >= close && close >= 1){
            ans += close*2;
            open--, close--;
        }
        else if(close > open){
            close = open;
        }
    }
    return ans;
}