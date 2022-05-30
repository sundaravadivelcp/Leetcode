class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0,lmax = 0,rmax =0, mmax, n;
        
        
        n = height.size();
        
        int i=0,j=n-1;
        while(i<j){
            if(height[i] <= height[j]){
                lmax = max(lmax, height[i]);
                ans += lmax - height[i];
                i++;
            } else {
                rmax = max(rmax, height[j]);
                ans += rmax - height[j];
                j--;
            }
        }
        
        return ans;
    }
    
//     int trap(vector<int>& height) {
//         int ans = 0, n = height.size(), mmin,mmax;
//         vector<int> r(n,0);
        
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1; j<n;j++){
//                 mmin = min(height[i], height[j]);
                
//                 for(int k = 1;k+i<j;k++){
//                     int diff = max(0,mmin-height[i+k]);
//                     ans += diff;
//                     height[i+k] += diff;
//                 }
//             }
//         }
        
//         return ans;
//     }
    
    
//     int trap(vector<int>& height) {
//         int ans = 0, n = height.size(), mmin,mmax;
//         vector<int> r(n,0);
        
//         r[n-1] = height[n-1];
        
//         for(int i=n-1;i>=0;i--){
//             if(height[i] == 0) continue;
//             mmax = 0;
//             for(int j=i+1; j<n;j++){
//                 if(height[i] <= height[j]){
//                     r[i] = height[i];
//                     break;
//                 } else {
//                     mmax = max(mmax, r[j]);
//                 }
//                 r[i] = mmax;
//             }
//         }
                   
//         for(auto& i : r){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//         for(int i=0;i<n-1;i++){
//             r[i+1] = max(r[i+1], r[i]);
//             cout<< max(0,r[i] - height[i])<<" ";
//             ans += (max(0,r[i] - height[i]));
//         }
            
        
//         return ans;
//     }
    
};