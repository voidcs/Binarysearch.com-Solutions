//https://binarysearch.com/problems/Skydivers
int solve(vector<int>& v, int k) {
    int n = v.size();
    int ans = 0;
    auto valid = [&](int x){
        int days = 1, sum = 0;
        for(int i = 0; i < n; i++){
            if(v[i] > x)
                return false;
            if(sum + v[i] > x){
                days++;
                sum = v[i];
            }
            else
                sum += v[i];
        }
        return days <= k;
    };
    int l = 0, r = 1e9;
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