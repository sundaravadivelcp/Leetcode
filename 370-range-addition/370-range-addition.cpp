class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        vector<int> ans(length,0);
        
        int n = updates.size();
        
        for(int i = 0; i < n; i++){
            ans[updates[i][0]] += updates[i][2];
            if(updates[i][1] + 1 < length){
                ans[updates[i][1] + 1] -= updates[i][2];
            }
        }
        
        for(int i = 1; i < length; i++){
            ans[i] += ans[i-1];
        }
        
        return ans;
    }
};