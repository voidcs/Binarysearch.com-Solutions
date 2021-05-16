//https://binarysearch.com/problems/ASCII-String-to-Integer
int solve(string s) {
    int ans = 0;
    int n = s.length();
    for(int i = 0; i < n; i++){
        string num;
        int j = i;
        while(j < n && isdigit(s[j])){
            num += s[j];
            j++;
        }
        i = j;
        if(num.size() > 0)
            ans += stoi(num);
    }
    return ans;
}