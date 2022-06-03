class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> v = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
        string s;
        int n = num;
        int i = 0;
        while(n > 0){
            if(v[i].first <= n){
                n -= v[i].first;
                s += v[i].second;
            } else {
                i++;
            }
        }
        
        return s;
    }
};