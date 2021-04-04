//https://binarysearch.com/problems/Narcissistic-Number
bool solve(int n) {
    int t = n;
    int len = to_string(n).length();
    int 
    int ans = 0;
    while(t){
        int x = t % 10;
        ans += pow(x, len);
        t /= 10;
    }
    return ans == n;
}