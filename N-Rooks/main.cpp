//https://binarysearch.com/problems/N-Rooks
int solve(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++)
        ans *= i;
    return ans;
}