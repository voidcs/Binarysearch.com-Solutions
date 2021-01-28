//https://binarysearch.com/problems/Guess-the-Root
int solve(int n) {
    typedef long long ll;
    int ans = 0;
    for(ll i = 1; i*i <= (long long)3*n; i++){
        if((i*i) > n){
            ans = i-1;
            break;
        }
    }
    return ans;
}