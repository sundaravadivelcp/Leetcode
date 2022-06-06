class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        long long ans=1;
        int m = 0,mi = -1,f=0;
        if(armor > 0){
            for(int i=0;i<damage.size();i++){
                if(damage[i] >= armor){
                    damage[i] -= armor;
                    f = 1;
                    break;
                }
                if(m<damage[i]){
                    m = max(m,damage[i]);
                    mi = i;
                }
            }
            if(!f){
                ans -= m;
            }
            
        }
        
        
        for(auto& d:damage){
            ans += d;
        }
        
        return ans;
    }
};