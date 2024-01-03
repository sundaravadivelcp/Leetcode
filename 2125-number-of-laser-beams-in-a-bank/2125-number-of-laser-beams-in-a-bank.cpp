class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        for(auto& b:bank){
            int count = 0;
            for(char& c:b){
                if(c == '1')
                    count++;
            }
            if(count > 0){
                v.push_back(count);
            }
        }
        if(v.size() < 2){
            return 0;
        }

        int ans = 0;
        for(int i = 0; i< v.size() - 1; i++){
            ans += v[i] * v[i+1];
        }
        return ans;
    }
};