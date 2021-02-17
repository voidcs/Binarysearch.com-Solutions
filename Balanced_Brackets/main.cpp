//https://binarysearch.com/problems/Balanced-Brackets
bool solve(string s) {
    int bal = 0;
    bool flag = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(')
            bal++;
        else
            bal--;
        if(bal < 0)
            flag = 0;
    }
    if(bal != 0)
        flag = 0;
    return flag;
}