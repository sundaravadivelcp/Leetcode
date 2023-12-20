class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int m1 =INT_MAX, m2=INT_MAX;
        for(int price: prices){
            if(price < m1){
                m2 = m1;
                m1 = price;
            } else if(price<m2){
                m2 = price;
            }
        }
        int sum = (m1 == INT_MAX? 0:m1) + (m2 == INT_MAX? 0:m2);
        if(sum <= money){
            money -= sum;
        }
        return money;
    }
};