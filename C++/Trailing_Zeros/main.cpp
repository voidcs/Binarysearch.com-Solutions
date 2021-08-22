//https://binarysearch.com/problems/Trailing-Zeros
int solve(int k) {
    int ans = 0;
    int x = 5;
    while(x <= k){
        ans++;
        x *= 5;
    }
    return ans;
}