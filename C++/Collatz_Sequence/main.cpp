//https://binarysearch.com/problems/Collatz-Sequence
int solve(int n) {
    int ans = 1;
    while(n != 1){
        ans++;
        if(n%2)
            n = (3*n)+1;
        else
            n /= 2;
    }
    return ans;
}