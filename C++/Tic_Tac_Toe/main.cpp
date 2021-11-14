//https://binarysearch.com/problems/Tic-Tac-Toe
class TicTacToe {
    int n;
    map<int, int> aRow, aCol, bRow, bCol;
    public:
    TicTacToe(int n) {
        this->n = n;
    }

    int move(int r, int c, bool me) {
        if(me){
            if(r == c){
                aRow[-1]++;
                if(aRow[-1] == n)
                    return 1;
            }
            if(r+c == n-1){
                aCol[-1]++;
                if(aCol[-1] == n)
                    return 1;
            }
            aRow[r]++;
            aCol[c]++;
            if(aRow[r] == n || aCol[c] == n)
                return 1;
        }
        else{
            if(r == c){
                bRow[-1]++;
                if(bRow[-1] == n)
                    return -1;
            }
            if(r+c == n-1){
                bCol[-1]++;
                if(bCol[-1] == n)
                    return -1;
            }
            bRow[r]++;
            bCol[c]++;
            if(bRow[r] == n || bCol[c] == n)
                return -1;
        }
        return 0;
    }
};