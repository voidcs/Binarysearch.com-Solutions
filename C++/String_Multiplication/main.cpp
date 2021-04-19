//PROBLEM LINK
//https://binarysearch.com/problems/String-Multiplication

string solve(string a, string b) {
    vector<string> products;
    int pow = 0;
    int neg = 0;
    if(a[0] == '-'){
        neg++;
        a.erase(a.begin());
    }
    if(b[0] == '-'){
        neg++;
        b.erase(b.begin());
    }
    for(int i = b.length()-1; i >= 0; i--){
        int carry = 0;
        string ans(pow, '0');
        char x = b[i];
        for(int j = a.length()-1; j >= 0; j--){
            int res = ( (x-'0') * (a[j]-'0') ) + carry;
            carry = res / 10;
            res %= 10;
            ans = to_string(res) + ans;
        }
        if(carry)
            ans = to_string(carry) + ans;
        products.push_back(ans);
        pow++;
    }
    int n = 0;
    for(int i = 0; i < products.size(); i++)
        n = max(n, (int)products[i].length());
    for(int i = 0; i < products.size(); i++){
        while(products[i].length() != n)
            products[i] = '0' + products[i];
    }
    int carry = 0;
    string ans;

    for(int i = n-1; i >= 0; i--){
        int res = 0;
        for(int j = 0; j < products.size(); j++){
            res += products[j][i] - '0';
        }
        res += carry;
        carry = res / 10;
        ans = to_string(res%10) + ans;
    }
    if(carry)
        ans = to_string(carry) + ans;
    if(neg % 2)
        ans = '-' + ans;
    return ans;
}