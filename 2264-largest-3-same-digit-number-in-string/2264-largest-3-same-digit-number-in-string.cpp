class Solution {
public:
    string largestGoodInteger(string num) {
        char c = '/';
        string ans = "";
        int j =0;
        for(int i = 0; i<num.size()-2;i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2] && c < num[i]){
                c = num[i];
                j=i;
                i+=2;
            }
        }
        if(c!= '/' )
            ans = num.substr(j, 3);
        return ans;
    }
};