//https://binarysearch.com/problems/Longest-Strictly-Increasing-Then-Decreasing-Sublist
int solve(vector<int>& v) {
    int n = v.size();
    int ans = 0;
    for(int i = 0; i < n; i++){
        int j = i;
        int cnt = 0;
        while(i+1 < n && v[i+1] > v[i]){
            cnt |= 1;
            i++;
        }
        while(i+1 < n && v[i+1] < v[i]){
            cnt |= 2;
            i++;
        }
        if(cnt != 3 && i > j)
            i--;
        if(cnt == 3)
            ans = max(ans, i - j + 1);
    }
    return ans;
}