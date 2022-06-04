class MRUQueue {
private:
    //list<int> l;
    vector<int> v;
public:
    MRUQueue(int n) {
        for(int i=1; i<=n; i++){
            //l.push_back(i);
            v.push_back(i);
            
        }
    }
    
    int fetch(int k) {
        int value = v[k-1];
        v.erase(v.begin()+ k - 1);
        v.push_back(value);
        return value;
    }
};

/**
 * Your MRUQueue object will be instantiated and called as such:
 * MRUQueue* obj = new MRUQueue(n);
 * int param_1 = obj->fetch(k);
 */