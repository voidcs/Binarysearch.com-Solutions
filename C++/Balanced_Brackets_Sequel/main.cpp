//https://binarysearch.com/problems/Balanced-Brackets-Sequel
bool solve(string s) {
    bool flag = 1;
    stack<char> last;
    for(char c: s){
        if(c == '[' || c == '(' || c == '{')
            last.push(c);
        else{
            if(last.empty()){
                flag = 0;
            }
            else{
                if(c == ')'){
                    if(last.top() != '(')
                        flag = 0;
                    else
                        last.pop();
                }
                else if(c == ']'){
                    if(last.top() != '[')
                        flag = 0;
                    else
                        last.pop();
                }
                else if(c == '}'){
                    if(last.top() != '{')
                        flag = 0;
                    else
                        last.pop();
                }
            }
        }
    }
    return flag && last.empty();
}