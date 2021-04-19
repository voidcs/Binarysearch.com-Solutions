//https://binarysearch.com/problems/Palindromic-Integer
bool solve(int x) {
    vector<int> v;
    while(x){
        v.push_back(x%10);
        x /= 10;
    }
    vector<int> t = v;
    reverse(t.begin(), t.end());
    return (t == v);
}