class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int p1=0,p2=0;
        int n = n1 + n2;
        if(n%2 ==0){
            n = (n+2)/2;
        } else {
            n = n/2 + 1;
        }
        cout<<"n: "<<n<<endl;
        
        int a1,a2;
        for(int i=0;i<n;i++){
            a1 = a2;
            if(p1<n1 && p2<n2){
                if(nums1[p1] < nums2[p2]){
                    a2 = nums1[p1];
                    p1++;
                } else {
                    a2 = nums2[p2];
                    p2++;
                }
            } else if(p1>=n1){
                a2 = nums2[p2];
                p2++;
            } else if(p2>=n2){
                a2 = nums1[p1];
                p1++;
            }
            cout<<a1<<" "<<a2<<endl;
        }
        
        if((n1+n2) %2 ==0){
            ans = (a1+a2)/2.0;
        } else {
            ans = a2;
        }
        return ans;
    }
};