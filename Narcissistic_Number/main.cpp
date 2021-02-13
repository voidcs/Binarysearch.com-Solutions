//https://binarysearch.com/problems/Narcissistic-Number
bool solve(int n) {
    bool flag = 1;
    int sum = 0;
    int p = to_string(n).length();
    vector<int> v;
    int temp = n;
    while(temp){
        v.push_back(temp%10);
        temp /= 10;
    }

    function<int(int, int)> expo_pow = [&](int base, int power){
        int res = 1;
        while(power){
            if(power%2){
                res *= base;
            }
            base *= base;
            power /= 2;
        }
        return res;
    };
    for(auto x: v){
        sum += expo_pow(x, p);
    }
    return sum == n;
}