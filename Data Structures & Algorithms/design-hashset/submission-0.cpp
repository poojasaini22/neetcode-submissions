class MyHashSet {
    vector<int> table;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(find(table.begin(),table.end(),key) == table.end()){
            table.push_back(key);
        }
        
    }
    
    void remove(int key) {
        if(find(table.begin(),table.end(),key) != table.end()){
            for(int i=0;i<table.size();i++){
                if (key==table[i]){
                    table.erase(table.begin()+i);
                }
            }
            
        }
        
    }
    
    bool contains(int key) {
        return find(table.begin(),table.end(),key)!=table.end();
        // return table.find(key)==table.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */