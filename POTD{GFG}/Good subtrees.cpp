class Solution{
public:
    int count = 0;
    
    unordered_set<int> func(Node* root, int k){
        unordered_set<int> s;
        if(!root)
            return s;
        
        auto l = func(root->left, k);

        auto r = func(root->right, k);
        
       
        if(r.size()>k)
            return r;
        if(l.size()>k)
            return l;
            
        for( auto x: l){
            s.insert(x);
        }
        for(auto x: r)
            s.insert(x);
        
        s.insert(root->data);
        
        if(s.size()<=k){
            count++;
             
        }
           
        return s;
    }
     int goodSubtrees(Node *root,int k){
        func(root, k);
        return count;
    }
};
