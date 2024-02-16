class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        multimap<int,int> mtp;

        for(int& num:arr){
            mp[num]++;
        }

        for(auto& record:mp){
            mtp.insert({record.second, record.first});
        }

        for(auto& record:mtp){
            cout<<record.first<<" "<<record.second<<endl;
            if(record.first <= k){
                mp.erase(mp.find(record.second));
                //cout<< "deleting: "<< record.second<<endl;
                k -= record.first;    
            } else {
                break;
            }
        }

        return mp.size();

    }
};