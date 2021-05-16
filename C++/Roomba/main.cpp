
//https://binarysearch.com/problems/Roomba
bool solve(vector<string>& moves, int x, int y) {
    int currX = 0, currY = 0;
    for(auto x: moves){
        if(x == "NORTH")
            currY++;
        if(x == "SOUTH")
            currY--;
        if(x == "EAST")
            currX++;
        if(x == "WEST")
            currX--;
    }
    return (currX == x && currY == y);
}