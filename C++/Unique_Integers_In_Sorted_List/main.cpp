//https://binarysearch.com/problems/Unique-Integers-in-Sorted-List
int solve(vector<int>& nums) {
    set<int> s;
    for(int i = 0; i < nums.size(); i++)
        s.insert(nums[i]);
    return s.size();
}