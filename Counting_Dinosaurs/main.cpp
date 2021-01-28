//https://binarysearch.com/problems/Counting-Dinosaurs
int solve(string a, string b) {
    set<char> s;
    for(int i = 0; i < b.length(); i++)
        s.insert(b[i]);
    int ans = 0;
    for(int i = 0; i < a.length(); i++){
        if(s.count(a[i]))
            ans++;
    }
    return ans;
}