//https://binarysearch.com/problems/Base-3-to-Integer
int solve(string s) {
    int pow = 1;
    int ans = 0;
    for(int i = s.length()-1; i >= 0; i--){
        ans += (s[i] - '0') * pow;
        pow *= 3;
    }
    return ans;
}