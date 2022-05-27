class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.length();
        
        vector<int> group;
        int count = 1, answer = 0;
        
        for(int i=0;i<n;i++){
            if(s[i] == s[i+1]){
                count++;
            } else{
                group.push_back(count);
                count = 1;
            }
        }
        
        for(int i=1; i<group.size();i++){
            answer += min(group[i], group[i-1]);
        }
        
        return answer;
    }
};