//https://binarysearch.com/problems/Majority-Vote
int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int ans = -1, id = 0;
    for(int i = 0; i < nums.size(); i++){
        int x = nums[i];
        int cnt = 0;
        while(nums[i] == x){
            cnt++;
            i++;
        }
        i--;
        if(cnt > nums.size()/2)
            ans = x;
    }
    return ans;
}