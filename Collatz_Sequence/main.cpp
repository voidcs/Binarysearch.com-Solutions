//https://binarysearch.com/problems/Collatz-Sequence
int solve(int n) {
    int ans = 1;
    while(n != 1){
        if(n%2 == 0){
            n /= 2;
            ans++;
        }
        else{
            n = (3*n)+1;
            ans++;
        }
    }
    return ans;
}