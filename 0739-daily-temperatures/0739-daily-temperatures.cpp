class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0);
        
        int hottest = 0;
        
        for(int i = n - 1; i >= 0; i--){
            if(temperatures[i] >= hottest) {
                hottest = temperatures[i];
                continue;
            }
            for(int j = i + 1; j < n; j++){
                if(temperatures[i] < temperatures[j]){
                    answer[i] = j - i;
                    break;
                } else if (temperatures[i] == temperatures[j]){
                    if(answer[j] > 0){
                        answer[i] = answer[j] + j - i;
                    }
                    break;
                }
            }
        }

        return answer;
    }
};