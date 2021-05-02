//https://binarysearch.com/problems/Inverse-Factorial
int solve(int a) {
    int fac = 1, f = 1;
    while(fac < a){
        fac *= f++;
    }
    if(fac == a)
        return f-1;
    return -1;
}