
class Solution{

    public:
    int ladoos(Node* root, int home, int k)
    {
       queue<Node*>q;
        q.push(root);
        Node* need;
        unordered_map<Node*,Node*>parent;
        //performing the bfs too find the home and stoing the parent
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                auto top=q.front();
                q.pop();
                if(top->data==home){
                    need=top;
                }
                if(top->left){
                    q.push(top->left);
                    parent[top->left]=top;
                }
                if(top->right){
                    q.push(top->right);
                    parent[top->right]=top;
                }
            }
        }
        unordered_map<Node*,bool>visited;
        q.push(need);
        int dis=0;
        int ans=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                auto top=q.front();
                q.pop();
                ans+=top->data;
                visited[top]=1;
                if(top->left && !visited[top->left]){
                    q.push(top->left);
                }
                if(top->right && !visited[top->right]){
                    q.push(top->right);
                }
                if(parent[top] && !visited[parent[top]]){
                    q.push(parent[top]);
                }
            }
            dis++;
            if(dis>k) break;
        }
        
        return ans;
    }


};
