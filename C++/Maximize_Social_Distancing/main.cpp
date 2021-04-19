//https://binarysearch.com/problems/Maximize-Social-Distancing
int solve(vector<int>& seats) {
    vector<int> v;
    int n = seats.size();
    for(int i = 0; i < n; i++){
        if(seats[i])
            v.push_back(i);
    }
    int ans = 0;
    if(!seats[0])
        ans = max(ans, v[0]);
    if(!seats[n-1])
        ans = max(ans, (n-1) - v[v.size()-1]);
    for(int i = 0; i < v.size()-1; i++){
        ans = max(ans, (v[i+1]-v[i])/2);
    }
    return ans;
}