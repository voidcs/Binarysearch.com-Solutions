//https://binarysearch.com/problems/Odd-Number-of-Digits
int solve(vector<int>& nums){
    int ans = 0;
    for(int x: nums){
        int cnt = 0;
        while(x > 0)
            cnt++, x /= 10;
        if(cnt%2)
            ans++;
    }
    return ans;
}