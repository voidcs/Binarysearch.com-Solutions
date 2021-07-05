//https://binarysearch.com/problems/Eat-Bananas-in-K-Hours
int solve(vector<int>& v, int k) {
    int n = v.size();
    int ans = 1e9;
    int l = 1, r = 1e9;
    auto valid = [&](int m){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += (v[i]+m-1)/m;
        }
        return sum <= k;
    };
    while(l <= r){
        int m = (l+r)/2;
        if(valid(m)){
            ans = m;
            r = m-1;
        }
        else
            l = m+1;
    }
    return ans;
}