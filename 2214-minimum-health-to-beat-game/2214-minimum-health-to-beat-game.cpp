class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        long long ans=1;
        int m = 0;
    
        
        for(auto& d:damage){
            ans += d;
            m = max(m,d);
        }
        
        ans -= min(m,armor);
        
        return ans;
    }
};