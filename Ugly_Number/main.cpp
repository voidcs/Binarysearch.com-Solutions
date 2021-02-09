//https://binarysearch.com/problems/Ugly-Number
bool solve(int n) {
    if(n == 0)
        return false;
    map<int, int> m;
    for(int i = 2; i*i <= n; i++){
        int cnt = 0;
        while(n%i == 0){
            cnt++;
            n /= i;
        }
        if(cnt)
            m[i] = cnt;
    }
    if(n > 1)
        m[n] = 1;
    bool flag = 1;
    for(auto x: m){
        int y = x.first;
        if(y != 2 && y != 3 && y != 5)
            flag = 0;
    }
    return flag;
}