class RandomizedSet {
public:
    map<int,int>m;
    vector<int>v;
    
    
  
    
    bool insert(int val) {
        
       if(m[val]==0)
       {
             m[val]++;
           v.push_back(val);
           return true;
       }
        m[val]++;
        
        return false;
    }
    
    bool remove(int val) {
       
        if(m[val]!=0)
        {
            m[val]=0;
            
            vector<int>::iterator itr;
            vector<int>v1;
            for(itr=v.begin();itr!=v.end();++itr)
            {
               if(val!=*itr)
               {

                    v1.push_back(*itr);
               }
            
            }
            v.clear();
            v=v1;
            v1.clear();
            
            
            return true;
        }
        return false;
        
    }
    
    int getRandom() {
       
return v[rand() % v.size()];

 
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */