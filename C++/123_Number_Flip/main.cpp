//https://binarysearch.com/problems/123-Number-Flip
int solve(int n) {
    string s = to_string(n);
    for(char &c: s){
        if(c != '3'){
            c = '3';
            break;
        }
    }
    return stoi(s);
}