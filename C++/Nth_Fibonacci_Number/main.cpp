//https://binarysearch.com/problems/Nth-Fibonacci-Number
int solve(int n) {
    int a = 1, b = 1;
    for(int i = 0; i < n-1; i++){
        int newA = b;
        int newB = a+b;
        a = newA, b = newB;
    }
    return a;
}