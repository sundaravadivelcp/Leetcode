class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        priority_queue<int,vector<int>, greater<int>> pq;

        for(int& num:arr){
            mp[num]++;
        }

        for(auto& record:mp){
            pq.push(record.second);
        }

        while(!pq.empty()){
            int top = pq.top();
            if(top <= k){
                pq.pop();
                //cout<< "deleting: "<< record.second<<endl;
                k -= top;    
            } else {
                break;
            }
        }

        return pq.size();

    }
};