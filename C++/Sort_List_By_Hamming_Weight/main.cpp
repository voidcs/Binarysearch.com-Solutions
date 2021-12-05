//https://binarysearch.com/problems/Sort-List-by-Hamming-Weight
bool comp(int lhs, int rhs){
    int x = __builtin_popcount(lhs);
    int y = __builtin_popcount(rhs);
    if(x != y)
        return x < y; 
    return lhs < rhs;
}
vector<int> solve(vector<int>& nums) {
    sort(nums.begin(), nums.end(), comp);
    return nums;
}