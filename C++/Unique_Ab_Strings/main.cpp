//https://binarysearch.com/problems/Unique-Ab-Strings
int solve(string s) {
    long long ans = 1;
    for(char c: s)
        if(c == 'a')
            ans *= 2;
    return ans;
}