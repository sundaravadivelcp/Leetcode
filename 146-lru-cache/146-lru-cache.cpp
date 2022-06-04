class LRUCache {
private:
    int cap;
    list<int> l;
    unordered_map<int,list<int>::iterator> keypos; 
    unordered_map<int,int> m;
    int size;
public:
    LRUCache(int capacity) {
        cap = capacity;
        size = 0;
    }
    
    int get(int key) {
        if(m.find(key) != m.end()){
            l.erase(keypos[key]);
            l.push_front(key);
            keypos[key] = l.begin();
            return m[key];
        }
            
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            m.erase(key);
            l.erase(keypos[key]);
            keypos.erase(key);
            size --;
        }
        
        if(size == cap){
            int k = l.back();
            m.erase(k);
            keypos.erase(k);
            l.pop_back();
            size--;
        }
        
        m[key] = value;
        l.push_front(key);
        keypos[key] = l.begin();
        size++;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */