//https://binarysearch.com/problems/Three-Player-Coin-Game
int solve(vector<int>& piles) {
    sort(piles.rbegin(), piles.rend());
    int ans = 0;
    int j = 1;
    for(int i = 0; i < piles.size()/3; i++){
        ans += piles[j];
        j += 2;
    }
    return ans;
}