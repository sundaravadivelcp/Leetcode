class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int ans=0,mn=INT_MAX;
        for(auto x:prices){
            mn=min(mn,x); // min price so far
            ans=max(ans,x-mn); // overall profit if it sold today
        }
        return ans;
    }
};