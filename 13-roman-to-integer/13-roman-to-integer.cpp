class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, n = s.length();
        
        unordered_map<char,int> m = {{'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
        
        for(int i = 0;i<n-1;i++){
            if(m[s[i+1]] > m[s[i]]){
                ans -= m[s[i]];
            } else {
                ans += m[s[i]];
            }
        }
        ans += m[s[n-1]];
        
        return ans;
    }
};