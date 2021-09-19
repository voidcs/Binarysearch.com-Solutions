bool solve(string s) {
    vector<int> cnt(26);
    for(char c: s){
        cnt[c-'a']++;
    }
    int odds = 0;
    for(int i = 0; i < 26; i++){
        if(cnt[i]%2)
            odds++;
    }
    return odds <= 1;
}