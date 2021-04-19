//https://binarysearch.com/problems/Look-and-Say
string solve(int n){
    string ans = "1";
    n--;
    while(n--){
        string t = ans;
        string newAns;
        for(int i = 0; i < t.length(); i++){
            char c = t[i];
            int cnt = 1;
            while(i < t.length() && t[i+1] == c){
                cnt++;
                i++;
            }
            newAns += to_string(cnt);
            newAns += c;
        }
        ans = newAns;
    }
    return ans;
}