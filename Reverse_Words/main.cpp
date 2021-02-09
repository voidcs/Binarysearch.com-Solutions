//https://binarysearch.com/problems/Reverse-Words
string solve(string sentence) {
    string ans;
    for(int i = 0; i < sentence.length(); i++){
        string word;
        while(i < sentence.length() && sentence[i] != ' '){
            word += sentence[i];
            i++;
        }
        cout<<"word: "<<word<<endl;
        ans = " " + ans;
        ans = word + ans;
    }
    if(ans.size())
        ans.erase(ans.length()-1, 1);
    return ans;
}