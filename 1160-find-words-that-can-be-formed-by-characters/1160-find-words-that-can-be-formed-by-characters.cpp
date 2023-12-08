class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> v1(26);

        for(auto& c:chars){
            v1[c-'a']++;
        }

        int ans = 0;
        for(int i = 0 ; i< words.size(); i++){
            vector<int> v2(26); 
            for(auto& c:words[i]){
                v2[c-'a']++;
            }
            int s = 0;
            for(int i =0; i< 26;i++){
                if(v1[i] >= v2[i]){
                    s += v2[i];
                } else {
                    break;
                }
            }
            if(s == words[i].size()){
                ans += s;
            }
        }


        return ans;
    }
};