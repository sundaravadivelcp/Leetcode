class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int i=0;
        while(i < asteroids.size()-1){
            if(asteroids[i] > 0 && asteroids[i+1] < 0 ){
                if(abs(asteroids[i]) > abs(asteroids[i+1])){
                    asteroids.erase(asteroids.begin() + i + 1);
                } else if(abs(asteroids[i]) < abs(asteroids[i+1])){
                    asteroids.erase(asteroids.begin() + i);
                    if(i-1 >= 0){
                        i--;
                    }
                } else {
                    asteroids.erase(asteroids.begin()+i);
                    asteroids.erase(asteroids.begin()+i);
                    if(i-1 >= 0){
                        i--;
                    }
                    if(asteroids.size() == 0){
                        break;
                    }
                }
                cout<<i<<" "<<asteroids.size()<<endl;
            } else {
                i++;
            }
        }
        
        return asteroids;
    }
};