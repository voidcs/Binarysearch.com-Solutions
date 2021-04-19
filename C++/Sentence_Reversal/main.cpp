//https://binarysearch.com/problems/Sentence-Reversal
vector<string> solve(vector<string>& sentence) {
    int start = 0;
    vector<string> ans;
    vector<string> v;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == " "){
            for(int j = v.size()-1; j >= 0; j--){
                ans.push_back(v[j]);
            }
            ans.push_back(" ");
            v.clear();
        }
        else
            v.push_back(sentence[i]);
    }
    for(int j = v.size()-1; j >= 0; j--){
        ans.push_back(v[j]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}