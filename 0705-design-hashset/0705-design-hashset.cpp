class MyHashSet {
public:
    int arr[1000001];
    MyHashSet() {
        for(int i=0;i<1000001;i++)
        {
            arr[i]=-1;
            
        }
    }
    
    void add(int key) {
        arr[key]=1;
    }
    
    void remove(int key) {
        arr[key]=-1;
    }
    
    bool contains(int key) {
        if(arr[key]==1)
        {
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */