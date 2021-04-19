//https://binarysearch.com/problems/Anagram-Partitioning
vector<int> solve(string a, string b) {
    map<char, int> one, two;
    int n = a.length();
    vector<int> ans;

    auto equal = [&](){
        if(one.size() != two.size())
            return false;
        for(auto x: one){
            if(!two.count(x.first) || two[x.first] != x.second)
                return false;
        }
        return true;
    };
    ans.push_back(0);
    for(int i = 0; i < n; i++){
        one[a[i]]++;
        two[b[i]]++;
        if(equal()){
            one.clear(), two.clear();
            ans.push_back(i+1);
        }
    }
    ans.pop_back();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a != b){
        ans.clear();
        return ans;
    }
    return ans;
}