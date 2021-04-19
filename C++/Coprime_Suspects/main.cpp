//https://binarysearch.com/problems/Coprime-Suspects
int solve(int a, int b) {
    if(__gcd(a, b) != 1)
        return 0;
    if(__gcd(a, b-1) != 1 || __gcd(a-1, b) != 1 || __gcd(a, b+1) != 1 || __gcd(a+1, b) != 1)
        return 1;
    return 2;
}