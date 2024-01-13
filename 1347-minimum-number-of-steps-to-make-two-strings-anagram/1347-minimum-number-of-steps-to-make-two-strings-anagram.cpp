class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        for(char c:t){
            if(freq.find(c) != freq.end()){
                freq[c]--;
                if(freq[c] == 0){
                    freq.erase(c);
                }
            }
        }
        int count = 0;
        for(auto record :freq){
            count += record.second;
        }
        return count;
    }
};