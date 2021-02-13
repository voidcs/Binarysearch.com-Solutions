string solve(string s) {
    function<bool(char, char)> comp = [&](char a, char b){
        set<char> vowel;
        string v = "aeiou";
        for(int i = 0; i < v.size(); i++)
            vowel.insert(v[i]);
        if(vowel.count(a) && vowel.count(b)){
            return a < b;
        }
        else if(vowel.count(a) && !vowel.count(b))
            return true;
        else if(!vowel.count(a) && vowel.count(b))
            return false;
        else return a < b;
    };
    sort(s.begin(), s.end(), comp);
    return s;
}