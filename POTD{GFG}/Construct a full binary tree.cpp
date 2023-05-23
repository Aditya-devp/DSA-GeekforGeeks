class Solution{
  public:
   int idx=0;
   Node*sol(int pre[],int preMirror[],int n,int l,int u)
   {
       if(l>u||idx>=n)
       return NULL;
       
       Node*root=new Node(pre[idx]);
       idx++;
       int index;
       for(int i=l;i<=u;i++)
       {
           if(preMirror[i]==pre[idx])
           {
               index=i;
               break;
           }
       }
       if(l==u)
       return root;
       
       if(index<=u&&index>=l)
       {
       root->left=sol(pre,preMirror,n,index,u);
       root->right=sol(pre,preMirror,n,l,index-1);
       }
       
       return root;
   }
    Node* constructBinaryTree(int pre[], int preMirror[], int n)
    {
        int l=0,u=n-1;
        idx=0;
        return sol(pre,preMirror,n,l,u);
    }
};
