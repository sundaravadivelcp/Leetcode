class StringIterator {
private:
    string s;
    int siz;
    int ptr,rem;
    char c;
public:
    StringIterator(string compressedString) {
        s = compressedString;
        siz = s.length();
        ptr = 0;
        rem = 0;
        c = ' ';
    }
    
    char next() {
        if(ptr >= siz && !rem){
            return ' ';
        }
        if(!rem){
            if(isalpha(s[ptr])){
                c = s[ptr];
                ptr++;
                rem = 0;
                while(isdigit(s[ptr])){
                    rem = rem*10 + ( s[ptr] - '0');
                    ptr++;
                }
                cout<<c<<" " << rem<<endl; 
            }
        }
        rem--;
        return c;
        
    }
    
    bool hasNext() {
        return ptr<siz || rem;
    }
};

/**
 * Your StringIterator object will be instantiated and called as such:
 * StringIterator* obj = new StringIterator(compressedString);
 * char param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */