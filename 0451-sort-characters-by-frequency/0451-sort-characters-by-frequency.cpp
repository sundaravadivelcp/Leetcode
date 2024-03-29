class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        string res;
        
        //count frequency of each character
        for(char c:s) freq[c]++;
        //put character into frequency bucket
        int maxFreq = 0;
        
        for(auto&it:freq) maxFreq = max(maxFreq, it.second);
        
        vector<string> bucket(maxFreq + 1, "");

        for(auto& it:freq) {
            int n = it.second;
            char c = it.first;
            bucket[n] += c;
        }

        for(int i = maxFreq; i>0; i--) {
            if(!bucket[i].empty())
                for (auto c : bucket[i]) {
                    for (int j = 0; j < i; j++) {
                        res += c;
                    }
                }
        }
        return res;
    }
};