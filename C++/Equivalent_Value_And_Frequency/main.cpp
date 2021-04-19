//https://binarysearch.com/problems/Equivalent-Value-and-Frequency
bool solve(vector<int>& nums) {
    map<int, int> m;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    bool flag = 0;
    for(auto x: m){
        if(x.first == x.second)
            flag = 1;
    }
    return flag;
}