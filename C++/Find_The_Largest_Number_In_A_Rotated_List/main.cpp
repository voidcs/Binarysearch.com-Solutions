//https://binarysearch.com/problems/Find-the-Largest-Number-in-a-Rotated-List
int solve(vector<int>& v) {
    int n = v.size();
    int ans = 0;
    int l = 0, r = n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] < v[l]){
            r = mid-1;
        }
        else{
            l = mid+1;
            ans = max(ans, v[mid]);
        }
    }
    return ans;
}