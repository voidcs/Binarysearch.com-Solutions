//https://binarysearch.com/problems/Sum-of-First-N-Odd-Integers
int solve(int n) {
    int ans = 0;
    int x = 1;
    for(int i = 0; i < n; i++){
        ans += x;
        x += 2;
    }
    return ans;
}