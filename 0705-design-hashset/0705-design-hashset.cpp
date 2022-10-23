
class MyHashSet {
public:
    vector<int> ans;
    MyHashSet() {
        ans.resize(1000007);
    }
    
    void add(int key) {
       ans[key]=1; 
    }
    
    void remove(int key) {
        ans[key]=0;
    }
    
    bool contains(int key) {
        return ans[key]!=0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */