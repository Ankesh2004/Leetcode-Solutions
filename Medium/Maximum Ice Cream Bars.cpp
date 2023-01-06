class Solution {
public:
    int maxIceCream(vector<int>& costs, long long coins) {
        int n=costs.size();

        sort(costs.begin(),costs.end());

        int numOfIcecream=0;

        for(const int price: costs){
            if (coins >= price) {
      ++numOfIcecream;
      coins -= price;
    }
        }
      

    return numOfIcecream;
    }
};
