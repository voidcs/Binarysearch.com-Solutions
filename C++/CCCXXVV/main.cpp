//https://binarysearch.com/problems/CCCXXVV
int solve(string numeral) {
    map<char, int> m;
    m['M'] = 1000;
    m['D'] = 500;
    m['C'] = 100;
    m['L'] = 50;
    m['X'] = 10;
    m['V'] = 5;
    m['I'] = 1;
    int n = numeral.length();

    int ans = 0;
    for(int i = 0; i < n; i++){
        int x = m[numeral[i]];
        bool sub = 0;
        for(int j = i+1; j < n; j++){
            if(m[numeral[j]] > x)
                sub = 1;
        }
        if(sub)
            ans -= x;
        else
            ans += x;
    }
    return ans;
}