//https://binarysearch.com/problems/Fractional-Knapsack
int solve(vector<int>& weights, vector<int>& values, int capacity) {
    int n = values.size();
    vector<array<int, 2>> items;
    for(int i = 0; i < n; i++){
        items.push_back({values[i], weights[i]});
    }
    auto comp = [&](array<int, 2> a, array<int, 2> b){
        return (long double)a[0]/a[1] > (long double)b[0]/b[1];
    };
    sort(items.begin(), items.end(), comp);
    long double ans = 0;
    for(int i = 0; i < n; i++){
        int take = min(capacity, items[i][1]);
        long double val = (long double)items[i][0]/items[i][1];
        ans += take * val;
        capacity -= take;
    }
    return (int)ans;
}