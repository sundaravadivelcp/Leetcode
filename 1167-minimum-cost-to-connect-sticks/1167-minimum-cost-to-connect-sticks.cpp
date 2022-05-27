class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        priority_queue <int, vector<int>, greater<int> > pq(sticks.begin(),sticks.end());
        int n = sticks.size();
        if(n==1) return 0;
        if(n==2) return sticks[0] + sticks[1];

        long long int sum = 0, cost = 0;
        // for(int i=0;i<sticks.size();i++){
        //     pq.push(sticks[i]);
        // }
        
        while(pq.size()>1){
            int n1 = pq.top();
            pq.pop();
            int n2 = pq.top();
            pq.pop();
            cost += n1 + n2;
            
            pq.push(n1 + n2);
        }
        return cost;
            
    }
};