//https://binarysearch.com/problems/Longest-Consecutive-Run-of-1s-in-Binary
int solve(int n) {
    int ans = 0, cnt = 0;
    while(n){
        if(n%2 == 1)
            cnt++;
        else if(n%2 == 0)
            cnt = 0;
        ans = max(ans, cnt);
        n /= 2;
    }
    return ans;
}