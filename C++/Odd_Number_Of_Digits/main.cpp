//https://binarysearch.com/problems/Odd-Number-of-Digits
int solve(vector<int>& nums) {
    int ans = 0;
    for(int i = 0; i < nums.size(); i++){
        int digitCount = 0;
        while(nums[i] != 0){
            digitCount++;
            nums[i] /= 10;
        }
        if(digitCount%2 == 1)
            ans++;
    }
    return ans;
}