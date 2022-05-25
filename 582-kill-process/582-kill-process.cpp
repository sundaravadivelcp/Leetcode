class Solution {
public:
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        vector<int> ans;
        
        stack<int> s;
        
        unordered_map<int, int> m;
        
        s.push(kill);
        
        ans.push_back(kill);
        
        for(auto& parent : ppid){
            m[parent]++;
        }
        
        int n = ppid.size(), j = 0, count = 1;
        while(!s.empty()){
            kill = s.top();
            s.pop();
            for(int i=0; i<n; i++){
                if(ppid[i] == kill){
                    ans.push_back(pid[i]);
                    if(m.count(pid[i])){
                        s.push(pid[i]);
                    }
                }
            }
        }
        return ans;
    }
};