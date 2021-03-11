//https://binarysearch.com/problems/Shift-to-Create-Range
bool solve(vector<int>& a) {
    bool increasing = 1, decreasing = 1;
    int n = a.size();
    for(int i = 0; i < n; i++){
        int next = (a[i] + 1 <= n) ? a[i]+1 : 1;
        if(i == n-1){
            if(a[0] != next)
                increasing = 0;
        }
        else{
            if(a[i+1] != next)
                increasing = 0;
        }
    }
    for(int i = n-1; i >= 0; i--){
        int next = (a[i] + 1 <= n) ? a[i]+1 : 1;
        if(i == 0){
            if(a[n-1] != next)
                decreasing = 0;
        }
        else{
            if(a[i-1] != next)
                decreasing = 0;
        }
    }
    return (increasing || decreasing);
}