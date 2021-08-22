//https://binarysearch.com/problems/Divisible-Numbers
int solve(int n, int a, int b, int c){
    auto valid = [&](long long x){
        long long cnt = (x/a) + (x/b) + (x/c);
        cnt -= x/(a*b);
        cnt -= x/(a*c);
        cnt -= x/(b*c);
        cnt += x/(a*b*c);
        return cnt >= n;
    };
    long long l = 1, r = 1e18, ans = 0;
    while(l <= r){
        long long m = (l+r)/2;
        if(valid(m)){
            ans = m;
            r = m-1;
        }
        else
            l = m+1;
    }
    return ans;
}