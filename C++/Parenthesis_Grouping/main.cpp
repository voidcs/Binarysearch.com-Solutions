//https://binarysearch.com/problems/Parentheses-Grouping
vector<string> solve(string s) {
    vector<string> ans;
    int bal = 0;
    string curr;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(')
            bal++;
        else
            bal--;
        curr += s[i];
        if(!bal){
            ans.push_back(curr);
            curr.clear();
        }
    }
    return ans;
}