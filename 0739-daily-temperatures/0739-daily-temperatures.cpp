class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0);
        
        for(int i = n - 2; i >= 0; i--){
            if(temperatures[i] < temperatures[i+1]){
                answer[i] = 1;
            } else if (temperatures[i] == temperatures[i+1]){
                if(answer[i+1] > 0)
                    answer[i] = answer[i+1] + 1;
            } else {
                for(int j = i + 2; j < n; j++){
                    if(temperatures[i] < temperatures[j]){
                        answer[i] = j - i;
                        break;
                    }
                }
            }
        }

        return answer;
    }
};