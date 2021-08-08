//https://binarysearch.com/problems/Delete-Repeated-Characters-with-Costs
int solve(string s, vector<int>& nums) {
    int n = s.length();
    int ans = 0;
    for(int i = 0; i < n; i++){
        int sum = 0, maxElement = 0;
        char c = s[i];
        while(i < n && s[i] == c){
            sum += nums[i];
            maxElement = max(maxElement, nums[i]);
            i++;
        }
        i--;
        ans += (sum - maxElement);
    }
    return ans;
}