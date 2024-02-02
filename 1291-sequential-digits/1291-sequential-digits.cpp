class Solution {
public:
    bool isSequential(int num){
        string s = to_string(num);
        for(int i = 0; i < s.length() - 1; i++){
            if(s[i+1] - s[i] != 1){
                return false;
            }
        }
        return true;
    }

    vector<int> sequentialDigits(int low, int high) {
        vector<int> answer;
        int minLen = to_string(low).length(), maxLen = to_string(high).length();
        int num = 0;
        for(int i = 1; i<10;i++){
            num = i;
            for(int j = minLen; j <= maxLen; j++){
                for(int k = num%10 + 1; k < 10; k++){
                    num *= 10;
                    num += k;
                    if(num >= low && num <= high){
                        answer.push_back(num);
                    }
                }
            }
            
        }
        sort(answer.begin(), answer.end());

        return answer;
    }
};