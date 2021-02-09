//https://binarysearch.com/problems/Integer-to-Base-3
string solve(int n) {
    string ans;
    bool flag = 0;
    if(n < 0){
        flag = 1;
        n *= -1;
    }
    while(n){
        ans += '0' + (n%3);
        n /= 3;
    }
    reverse(ans.begin(), ans.end());
    if(flag)
        ans = "-" + ans;
    return ans;
}