//https://binarysearch.com/problems/Guess-the-Root
int solve(int n) {
    long long l = 0, r = INT_MAX;
    long long ans = -1;
    while(l <= r){
        long long mid = (l+r) / 2;
        if(mid*mid <= n){
            ans = mid;
            l = mid+1;
        }
        else
            r = mid-1;
    }
    return ans;
}