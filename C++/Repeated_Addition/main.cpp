//https://binarysearch.com/problems/Repeated-Addition
int solve(int n) {
    if(n%9 == 0)
        return 9;
    return n%9;
}