//https://binarysearch.com/problems/Lexicographic-Swap
string solve(string s) {
    string t = s;
    int n = s.length();
    sort(t.begin(), t.end());
    int unoptimal = -1;
    if(s == t)
        return s;
    int i = 0;
    while(s[i] == t[i])
        i++;
    char c = 'z' + 1;
    int index = -1;
    for(int j = i+1; j < n; j++){
        if(s[j] <= c){
            c = s[j];
            index = j;
        }
    }
    swap(s[i], s[index]);
    return s;
}