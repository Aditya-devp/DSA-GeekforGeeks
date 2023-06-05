class Solution
{
    public:
    
    int minDiff(Node *root, int K)
    {
        int ans=INT_MAX;
        while(root!=NULL){
            int diff=abs(root->data-K);
            if(root->data==K){
                return 0;
            }
            else if(root->data>K){
                ans=min(ans,diff);
                root=root->left;
            }
            else{
               ans=min(ans,diff);
                root=root->right;
            }
        }
        return ans;
    }
};
