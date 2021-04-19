//https://binarysearch.com/problems/Word-Machine
int solve(vector<string>& a) {
    stack<int> s;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == "POP"){
            if(s.size())
                s.pop();
            else
                return -1;
        }
        else if(a[i] == "DUP"){
            if(s.size())
                s.push(s.top());
            else
                return -1;
        }
        else if(a[i] == "+"){
            if(s.size() <= 1)
                return -1;
            else{
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push((x+y));
            }
        }
        else if(a[i] == "-"){
            if(s.size() <= 1)
                return -1;
            else{
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push((x-y));
            }
        }
        else{
            int x = 0;
            int pow = 1;
            for(int j = a[i].length()-1; j >= 0; j--){
                x += (a[i][j]-'0') * pow;
                pow *= 10;
            }
            s.push(x);
        }
    }
    int ans = s.top();
    return ans;
}