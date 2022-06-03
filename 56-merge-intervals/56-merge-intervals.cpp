class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        
        int s=intervals[0][0],e = intervals[0][1];
        if(intervals.size() == 1){
            vector<int> v;
            v.push_back(s);
            v.push_back(e);
            ans.push_back(v);
            return ans;
        }
        
        for(int i=1; i<intervals.size();i++){
            if(intervals[i][0] <= e ){
                if(intervals[i][1] > e)
                    e = intervals[i][1];
            }
            else {
                vector<int> v;
                v.push_back(s);
                v.push_back(e);
                s = intervals[i][0];
                e = intervals[i][1];
                ans.push_back(v);
            }
        }
    
        vector<int> v;
        v.push_back(s);
        v.push_back(e);
        ans.push_back(v);
        
        
        return ans;
    }
};