//https://binarysearch.com/problems/Making-Pizza
int solve(string str) {
    set<char> s;
    string temp = "pizza";
    for(int i = 0; i < temp.size(); i++)
        s.insert(temp[i]);
    map<char, int> m;
    for(int i = 0; i < str.length(); i++){
        if(s.count(str[i]))
            m[str[i]]++;
    }
    int ans = 1e8;
    for(int i = 0; i < temp.size(); i++){
        if(temp[i] == 'z')
            ans = min(ans, m[temp[i]]/2);
        else
            ans = min(ans, m[temp[i]]);
    }
    return ans;
}