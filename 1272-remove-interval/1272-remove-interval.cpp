class Solution {
public:
    vector<vector<int>> removeInterval(vector<vector<int>>& intervals, vector<int>& toBeRemoved) {
        vector<vector<int>> ans;

        for(auto& interval:intervals){
            int s = interval[0], e = interval[1];
            if(s < toBeRemoved[0] && e <= toBeRemoved[0] || s >= toBeRemoved[1] && e >= toBeRemoved[1]){
                ans.push_back({s,e});
            } else if(s < toBeRemoved[0]){
                if(e <= toBeRemoved[1]){
                    ans.push_back({s, toBeRemoved[0]});
                } else {
                    ans.push_back({s, toBeRemoved[0]});
                    ans.push_back({toBeRemoved[1], e});
                }
            } else if(s >= toBeRemoved[0] && s < toBeRemoved[1] ){
                if(e > toBeRemoved[1]){
                    ans.push_back({toBeRemoved[1], e});
                }
            }
        }

        return ans;
    }
};