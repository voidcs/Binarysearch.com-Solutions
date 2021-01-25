//https://binarysearch.com/problems/Sum-of-the-Digits
int solve(int num) {
    int ans = 0;
    while(num){
        ans += num%10;
        num /= 10;
    }
    return ans;
}