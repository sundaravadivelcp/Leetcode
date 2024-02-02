class Solution {
public:
    vector<string> generatePossibleNextMoves(string currentState) {
        vector<string> answer;
        for(int i = 0; i < currentState.length()-1; i++){
            if(currentState[i] == '+' && currentState[i+1] == '+'){
                currentState[i] = '-';
                currentState[i+1] = '-';
                answer.push_back(currentState);
                currentState[i] = '+';
                currentState[i+1] = '+';
            }
        }
        return answer;
    }
};