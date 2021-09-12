//https://binarysearch.com/problems/Look-and-Say
string solve(int n) {
    string ans = "1";
    while(--n){
        string newAns;
        for(int i = 0; i < ans.length(); i++){
            int j = i, cnt = 0;
            while(j < ans.length() && ans[j] == ans[i])
                j++, cnt++;
            string s;
            newAns += string(1, cnt + '0') + ans[i];
            i = j-1;
        }
        ans = newAns;
    }
    return ans;
}