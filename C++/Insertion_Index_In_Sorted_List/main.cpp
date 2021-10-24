//https://binarysearch.com/problems/Insertion-Index-in-Sorted-List
int solve(vector<int>& v, int target) {
    int n = v.size();
    int l = 0, r = n-1;
    while(l <= r){
        int m = (l+r)/2;
        if(v[m] <= target)
            l = m+1;
        else
            r = m-1;
    }
    return l;
}