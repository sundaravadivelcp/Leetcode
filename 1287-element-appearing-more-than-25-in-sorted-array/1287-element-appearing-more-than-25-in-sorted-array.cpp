class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cur = arr[0],count = 1, n =arr.size();
        for(int i =1; i< n;i++){
            if(cur == arr[i]){
                count++;
            } else {
                cur = arr[i];
                count = 1;
            }
            if(count > n/4){
                return cur;
            }
        }
        return cur;
    }
};