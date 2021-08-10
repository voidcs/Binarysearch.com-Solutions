//https://binarysearch.com/problems/Rain-Catcher
int solve(vector<int>& v) {
    int n = v.size();
    int ans = 0;
    int j = 0;
    vector<int> biggest(n);
    int maxVal = -1;
    for(int i = n-1; i >= 0; i--){
        maxVal = max(maxVal, v[i]);
        biggest[i] = maxVal;
    }
    for(int i = 0; i < n; i++){
        int j = i+1;
        while(j < n && v[j] < v[i]){
            if(biggest[j] == v[j])
                break;
            j++;
        }
        int upper;
        if(j == n)
            upper = v[n-1];
        else
            upper = v[j];
        for(int k = i+1; k < j; k++){
            ans += min(upper, v[i]) - v[k];
        }
        i = j-1;
    }
    return ans;
}