class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        vector<int> ans(length,0);
        
        map<pair<int,int>,int> m;
        
        int n = updates.size();
        
        for(int i = 0; i < n; i++){
            m[{updates[i][0],updates[i][1]}] += updates[i][2];
        }
        
        for(auto it=m.begin();it!=m.end();it++){
            int s = it->first.first, e = it->first.second, u = it->second;
            for(int j=s; j<=e;j++){
                ans[j] += u;
            }
        }
        
        // for(int i = 0; i < n; i++){
        //     int s = updates[i][0], e = updates[i][1], u = updates[i][2];
        //     for(int j=s; j<=e;j++){
        //         ans[j] += u;
        //     }
        // }
        return ans;
    }
};