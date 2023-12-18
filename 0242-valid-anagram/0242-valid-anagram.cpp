class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int n = s.size();

        int a[26] = {0};
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(a[i]) return false;
        }

        return true;
    }
};