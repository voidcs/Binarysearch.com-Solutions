//https://binarysearch.com/problems/Find-the-Largest-Number-in-a-Rotated-List
int solve(vector<int>& v) {
    int n = v.size();
    int l = 0, r = n-1;
    int ans = -1;
    while(l <= r){
        int mid = (l+r)/2;
        ans = max(ans, v[mid]);
        if(v[mid] < v[l]){
            r = mid-1;
        }
        else{
            if(mid > 0){
                if(v[mid] > v[mid-1]){
                    l = mid+1;
                }
                else
                    r = mid-1;
            }
            else
                l = mid+1;
        }
    }
    return ans;
}