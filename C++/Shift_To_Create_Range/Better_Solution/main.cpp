//https://binarysearch.com/problems/Shift-to-Create-Range
bool solve(vector<int>& v) {
    int n = v.size(), c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (v[(i + 1) % n] - v[i] != 1) 
            c1++;
        if (v[i] - v[(i + 1) % n] != 1) 
            c2++;
    }
    return c1 == 1 || c2 == 1;
}