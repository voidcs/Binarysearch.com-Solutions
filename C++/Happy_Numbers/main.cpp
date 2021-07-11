//https://binarysearch.com/problems/Happy-Numbers
bool solve(int n) {
    set<int> seen;
    while(n != 1){
        if(seen.count(n)){
            return false;
        }
        seen.insert(n);
        int x = 0;
        while(n){
            x += (n%10) * (n%10);
            n /= 10;
        }
        n = x;
    }
    return true;
}