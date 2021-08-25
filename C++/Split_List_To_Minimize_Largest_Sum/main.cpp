//https://binarysearch.com/problems/Split-List-to-Minimize-Largest-Sum
int solve(vector<int>& v, int k) {
    int n = v.size();
    const int INF = 1e9;
    int l = 0, r = INF;
    int ans = 0;
    auto valid = [&](int x){
        int cnt = 1, sum = 0;
        for(int i = 0; i < n; i++){
            if(v[i] > x)
                return false;
            if(sum + v[i] > x){
                cnt++;
                sum = v[i];
            }
            else
                sum += v[i];
        }
        return cnt <= k;
    };
    while(l <= r){
        int m = (l+r)/2;
        if(valid(m)){
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return ans;
}