class Solution {
public:
//     static bool sortcol(const vector<int>& v1, const vector<int>& v2)
//     {
//         return v1[1] > v2[1];
//     }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
//         int sum = 0;
        
//         sort(boxTypes.begin(), boxTypes.end(), sortcol);
        
//         int i=0; 
//         while(truckSize > 0 && i < boxTypes.size()){
//             int m = min(truckSize , boxTypes[i][0]);
//             sum += m * boxTypes[i][1];
//             truckSize -= m;
//             i++;
//         }
        
//         return sum;
        int sum = 0;
        map<int, int, greater<int>> m;
        
        for(auto& box : boxTypes){
            m[box[1]] += box[0];
        }
        
        for(auto it = m.begin(); it!= m.end(); ++it) {
            if(it->second < truckSize){
                sum += (it->first * it->second);
                truckSize -= it->second;    
            } else {
                sum += (truckSize * it->first);
                break;
            }
        }
        return sum;
    }
};