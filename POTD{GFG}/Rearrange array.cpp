class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            int count=0;
           queue <int>queues;
           for(int i=0;i<n;i++){
               if(arr[i]<0){
                   arr[count++]=arr[i];
               }
               else{
                   queues.push(arr[i]);
               }
           }
               for(int i=count;i<n;i++){
                   int value=queues.front();
                   queues.pop();
                   arr[count++]=value;
               }
           
        }
};
