class Solution {
public:
    vector<string> generatePossibleNextMoves(string currentState) {
        int n = currentState.length();
        vector<string> answer;
        for(int i = 0; i<n-1; i++){
            string temp = currentState;
            if(currentState[i] == '+' && currentState[i+1] == '+'){
                temp[i] = '-';
                temp[i+1] = '-';
                answer.push_back(temp);
            }
        }
        return answer;
    }
};