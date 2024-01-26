class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        int n = sticks.size();
        if(n == 1){
            return 0;
        }
        priority_queue<int,vector<int>, greater<int>> pq;
        int ans = 0;
        for(int& stick:sticks){
            pq.push(stick);
        }

        while(pq.size() > 1){
            int stick1 = pq.top();pq.pop();
            int stick2 = pq.top();pq.pop();
            pq.push(stick1 + stick2);
            ans += stick1 + stick2;
        }

        return ans;
    }
};