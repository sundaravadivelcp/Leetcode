class Solution {
public:
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        vector<int> ans;
        queue<int> q;
        
        unordered_map<int, vector<int>> m;
        
        for(int i=0; i< ppid.size();i++){
            m[ppid[i]].push_back(pid[i]);
        }
        
        q.push(kill);
        
        while(!q.empty()){
            int cur = q.front();
            
            if(m.find(cur) != m.end()){
                vector<int> add = m[q.front()];
            
                for(int i=0; i<add.size();i++){
                    q.push(add[i]);
                }
            }
            q.pop();
            ans.push_back(cur);
            
        }
        
        
        return ans;
    }
};