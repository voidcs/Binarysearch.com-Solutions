//https://binarysearch.com/problems/FizzBuzz
vector<string> solve(int n) {
    vector<string> ans;
    for(int i = 1; i <= n; i++){
        if(i%3 != 0 && i%5 != 0){
            ans.push_back(to_string(i));
        }
        else{
            if(i%15 == 0){
                ans.push_back("FizzBuzz");
            }
            else if(i%5 == 0)
                ans.push_back("Buzz");
            else
                ans.push_back("Fizz");
        }
    }
    return ans;
}