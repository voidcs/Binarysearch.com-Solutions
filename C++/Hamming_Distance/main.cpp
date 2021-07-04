//https://binarysearch.com/problems/Hamming-Distance
int solve(int x, int y) {
    //return __builtin_popcount(x^y);
    int ans = 0;
    while(x || y){
        if(x%2 != y%2)
            ans++;
        x /= 2, y /= 2;
    }
    return ans;
}