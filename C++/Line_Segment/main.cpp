
//https://binarysearch.com/problems/Line-Segment
bool solve(vector<vector<int>>& a) {
    int rise = 0, run = 0;
    if(a.size() <= 2)
        return 1;
    rise = a[1][0] - a[0][0];
    run = a[1][1] - a[0][1];
    int g = __gcd(rise, run);
    rise /= g;
    run /= g;
    bool flag = 1;
    for(int i = 1; i < a.size(); i++){
        int x = a[i][0] - a[i-1][0];
        int y = a[i][1] - a[i-1][1];
        g = __gcd(x, y);
        x /= g, y /= g;
        if(x != rise || y != run)
            flag = 0;
    }
    return flag;
}