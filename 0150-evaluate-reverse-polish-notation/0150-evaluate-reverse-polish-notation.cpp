class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        unordered_set<string> s = {"+", "-", "*", "/"};
        for(string& token:tokens){
            if(s.find(token) == s.end()){
                stk.push(stoi(token));
            } else {
                int op1, op2;
                op2 = stk.top(); stk.pop();
                op1 = stk.top(); stk.pop();
                if(token == "+"){
                    stk.push(op1 + op2);
                } else if(token == "-"){
                    stk.push(op1 - op2);
                } else if(token == "*"){
                    stk.push(op1 * op2);
                } else if(token == "/"){
                    stk.push(op1 / op2);
                }
            }
        }
        return stk.top();
    }
};