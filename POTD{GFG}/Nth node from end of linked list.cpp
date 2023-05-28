class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           Node * temp=head;
           int N=1;
           while(temp){
               N++;
               temp=temp->next;
               
           }
           temp=head;
           if(N-1<n)
           return -1;
           N=N-n;
           for(int i=1;i<N;i++){
               temp=temp->next;
           }
           return temp->data;
    }
};
