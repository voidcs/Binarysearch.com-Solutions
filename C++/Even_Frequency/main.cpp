//https://binarysearch.com/problems/Even-Frequency
bool solve(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i++){
        int j = i;
        int cnt = 0;
        while(j < n && nums[j] == nums[i]){
            j++, cnt++;
        }
        i = j-1;
        if(cnt%2)
            return false;
    }
    return true;
}