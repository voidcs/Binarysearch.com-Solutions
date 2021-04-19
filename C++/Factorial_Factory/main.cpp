//https://binarysearch.com/problems/Factorial-Factory
int solve(int n) {
    long long ans = 1;
    for(int i = 1; i <= n; i++)
        ans *= i;
    return ans;
}