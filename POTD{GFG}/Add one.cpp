class Solution{
    public:
 
        void update(int a[], int n, int updates[], int k)
    {
        for(int i= 0 ; i < k ;i++){
            a[updates[i] - 1]+= 1;
        }
        for(int i = 1 ; i< n ;i++){
            a[i] = a[i-1]+ a[i];
        }

    }
    
};