class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> answer;
        string seq = "123456789";
        int minLen = to_string(low).length(), maxLen = to_string(high).length();

        for(int i = minLen; i <= maxLen; i++){
            for(int j = 0; j < seq.size() - i + 1; j++){
                int num = stoi(seq.substr(j,i));
                if(num >= low && num <= high){
                    answer.push_back(num);
                }
            }
        }

        return answer;
    }
};