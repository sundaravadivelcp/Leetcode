class Solution {
public:
    
    int distance(int x, int y){
        int dist = x*x + y*y;
        
        return dist;
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        map<int,vector<int>> m;
        vector<vector<int>> ans;
        
        for(int i=0;i<points.size();i++){
            m[distance(points[i][0], points[i][1])].push_back(i);
        }
        
        for(auto it=m.begin();it!=m.end();++it){
            int n = it->second.size();
            if(k>0){
                if(k<= n){
                    while(k>0){
                        ans.push_back(points[it->second[k-1]]);
                        k--;
                    }
                } else {
                    for(int i=0;i<n;i++){
                        ans.push_back(points[it->second[i]]);
                    }
                    k-=n;
                }
            } else {
                break;
            }
        }
        
        return ans;
    }
};