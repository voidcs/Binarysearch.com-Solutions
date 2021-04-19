//https://binarysearch.com/problems/5-Star-Review-Percentage
int solve(vector<vector<int>>& a, int x) {
    int n = 0, m = 0;
    for(int i = 0; i < a.size(); i++){
        n += a[i][0], m += a[i][1];
    }
    //If we already passed the threshold, the answer is 0
    //This avoids returning a negative answer
    if((100*n)/m >= x)
        return 0;

    //Add x-100+1 to take ceiling with negative denominator
    int ans = ((100*n) - (x*m) + (x-100+1)) / (x - 100);
    return ans;
}