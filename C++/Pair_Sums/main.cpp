//https://binarysearch.com/problems/Pair-Sums
int solve(vector<int>& nums) {
    map<int, int> m;
    int ans = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]%2){
            ans += m[0];
        }
        else{
            ans += m[1];
        }
        m[nums[i]%2]++;
    }
    return ans;
}