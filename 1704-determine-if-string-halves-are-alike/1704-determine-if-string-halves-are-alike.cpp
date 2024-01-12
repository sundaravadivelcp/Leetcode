class Solution {
public:
    bool halvesAreAlike(string s) {
        string vowels = "aeiouAEIOU";
        int count = 0;
        for(int i = 0;i<s.size()/2;i++){
            if(vowels.find(s[i]) != string::npos){
                count++;
            }
            if(vowels.find(s[s.size() - i - 1]) != string::npos){
                count--;
            }
        }
        return count == 0;
    }
};