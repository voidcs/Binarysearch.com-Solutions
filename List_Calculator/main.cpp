//https://binarysearch.com/problems/List-Calculator
vector<int> solve(vector<int>& nums, string op, int val) {
    if(op == "+"){
        for(int i = 0; i < nums.size(); i++){
            nums[i] += val;
        }
    }
    if(op == "-"){
        for(int i = 0; i < nums.size(); i++){
            nums[i] -= val;
        }
    }
    if(op == "*"){
        for(int i = 0; i < nums.size(); i++){
            nums[i] *= val;
        }
    }
    if(op == "/"){
        for(int i = 0; i < nums.size(); i++){
            nums[i] /= val;
        }
    }
    return nums;
}