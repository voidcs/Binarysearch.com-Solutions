//https://binarysearch.com/problems/String-Sequence
string solve(string a, string b, int n) {
    for(int i = 0; i <= n-1; i++){
        string x, y;
        if(i%2 == 0){
            x = b + a;
            a = b;
            b = x;
        }
        else{
            x = a + b;
            a = b;
            b = x;
        }
        cout<<a<<"  "<<b<<endl;
    }
    return a;
}