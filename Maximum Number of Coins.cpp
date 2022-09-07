class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(), piles.end());
        int n = piles.size()/3;
        int coins=0;
        int i = piles.size()-2;
        while(i>=n){
            coins = coins + piles[i];
            i -= 2; 
        }
        return coins;
    }
};
