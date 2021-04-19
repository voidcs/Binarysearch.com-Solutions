//https://binarysearch.com/problems/Greatest-Common-Divisors
int solve(vector<int>& nums) {
    function<int(int, int)> gcd = [&](int a, int b){
        if(b == 0)
            return a;
        return gcd(b, a%b);
    };
    int x = nums[0];
    for(int i = 1; i < nums.size(); i++){
        x = gcd(x, nums[i]);
    }
    return x;
}