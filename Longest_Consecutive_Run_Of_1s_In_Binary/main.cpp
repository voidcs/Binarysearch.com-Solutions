//https://binarysearch.com/problems/Longest-Consecutive-Run-of-1s-in-Binary
int solve(int n) {
    string binary;
    while(n){
        binary += '0' + (n%2);
        n /= 2;
    }
    int ans = 0, cnt = 0;
    for(int i = 0; i < binary.size(); i++){
        if(binary[i] == '1')
            cnt++;
        else
            cnt = 0;
        ans = max(ans, cnt);
    }
    return ans;
}