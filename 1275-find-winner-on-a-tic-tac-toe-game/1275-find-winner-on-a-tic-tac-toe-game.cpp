class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        
        char t[3][3];
        
        
        if(moves.size() < 5)
            return "Pending";
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                t[i][j] = ' ';
            }
        }
        
        for(int i=0;i<moves.size();i++){
            t[moves[i][0]][moves[i][1]] = i%2 == 0? 'A':'B';
        }
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
        for(int i=0;i<3;i++){
            if(t[i][0] == t[i][1] && t[i][1] == t[i][2] && t[i][0]!=' '){
                cout<<"here 1"<< i;
                return t[i][0] == 'A'? "A":"B";
            }
        }
        
        for(int i=0;i<3;i++){
            if(t[0][i] == t[1][i] && t[1][i] == t[2][i] && t[0][i]!=' '){
                cout<<"here 2"<<i;
                return t[0][i] == 'A'? "A":"B";
            }
        }
        
        if(t[0][0] == t[1][1] && t[1][1] == t[2][2] && t[0][0]!=' '){
            cout<<"here 3";
            return t[0][0] == 'A'? "A":"B";
        }
        
        
        if(t[0][2] == t[1][1] && t[1][1] == t[2][0] && t[0][2]!=' '){
            cout<<"here 4";
            return t[0][2] == 'A'? "A":"B";
        }
        
        
        if(moves.size() < 9)
            return "Pending";
        
        return "Draw";
    }
};