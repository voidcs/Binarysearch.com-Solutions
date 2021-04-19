//https://binarysearch.com/problems/Steady-Speed
int solve(vector<int>& a) {
    int ans = 2;
    int n = a.size();
    int curr = abs(a[1] - a[0]), cnt = 2;
    for(int i = 2; i < n; i++){
        if(abs(a[i] - a[i-1]) == curr){
            cnt++;
            ans = max(ans, cnt);
        }
        else{
            cnt = 2;
            curr = abs(a[i] - a[i-1]);
        }
    }
    ans = max(ans, cnt);
    return ans;
}