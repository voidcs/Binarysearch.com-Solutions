//https://binarysearch.com/problems/Range-Query-on-a-List
class RangeSum {
    public:
    vector<int> p;
    RangeSum(vector<int>& nums) {
        int n = nums.size();
        p = vector<int> (n+1);
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            p[i+1] = sum;
        }
    }

    int total(int i, int j) {
        return p[j] - p[i];
    }
};