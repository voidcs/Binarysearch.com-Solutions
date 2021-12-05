//https://binarysearch.com/problems/String-Addition
string solve(string a, string b) {
    vector<int> x, y;
    string ans;
    for(char c: a){
        x.push_back(c-'0');
    }
    for(char c: b){
        y.push_back(c-'0');
    }
    if(x.size() > y.size()){
        swap(x, y);
    }
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    int carry = 0;
    for(int i = 0; i < x.size(); i++){
        int d = x[i] + y[i] + carry;
        carry = 0;
        if(d >= 10)
            carry = 1, d -= 10;
        ans += '0' + d;
    }
    for(int i = x.size(); i < y.size(); i++){
        int d = y[i] + carry;
        carry = 0;
        if(d >= 10){
            carry = 1;
            d -= 10;
        }
        ans += '0' + d;
    }
    if(carry)   
        ans += "1";

    reverse(ans.begin(), ans.end());
    return ans;
}