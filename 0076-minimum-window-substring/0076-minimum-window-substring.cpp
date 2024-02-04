class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()){
            return "";
        }
        unordered_map<char,int> window;
        unordered_map<char,int> tMap;
        for(auto& c:t){
            tMap[c]++;
        }
        pair<int,int> res;

        int start = 0,need = tMap.size(), have = 0, resLen = INT_MAX;

        for(int end =0; end<s.size(); end++){
            char c = s[end];
            window[c]++;

            if(tMap[c] > 0 && window[c] == tMap[c]){
                have++;
            }

            while(have == need){
                if(end - start + 1 < resLen){
                    res = {start, end};
                    resLen = end - start + 1;
                }

                window[s[start]]--;

                if(tMap[s[start]] > 0 && window[s[start]] < tMap[s[start]]){
                    have--;
                }
                start++;
            }
        }

        if(resLen == INT_MAX)
            return"";
        return s.substr(res.first, res.second - res.first + 1);
    }
};