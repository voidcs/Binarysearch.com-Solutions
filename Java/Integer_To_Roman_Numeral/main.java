//https://binarysearch.com/problems/Integer-to-Roman-Numeral
string solve(int n) {
    unordered_map<string, int> m;
    m["I"] = 1;
    m["IV"] = 4;
    m["V"] = 5;
    m["IX"] = 9;
    m["X"] = 10;
    m["XL"] = 40;
    m["L"] = 50;
    m["XC"] = 90;
    m["C"] = 100;
    m["CD"] = 400;
    m["D"] = 500;
    m["CM"] = 900;
    m["M"] = 1000;
    string ans;
    while(n){
        string letter;
        int cost = 0;
        for(auto x: m){
            if(x.second <= n && x.second > cost){
                letter = x.first;
                cost = x.second;
            }
        }
        ans += letter;
        n -= cost;
    }
    return ans;
}