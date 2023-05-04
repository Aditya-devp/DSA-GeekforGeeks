class Solution{
public:
    int maxCoins(int n,vector<vector<int>> &ranges){
       sort(ranges.begin(),ranges.end()); 
        int maximum[n];
        maximum[n-1]=ranges[n-1][2];
        for(int i=n-2;i>=0;i--){
            maximum[i]=max(maximum[i+1],ranges[i][2]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int l = i + 1;
            int h = n - 1;
            int end = ranges[i][1];
            while(l<=h){
                int mid = l + (h-l)/2;
                if(ranges[mid][0]>=end){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(l==n)
            ans=max(ans,ranges[i][2]+0);
            else
            ans=max(ans,ranges[i][2]+maximum[l]); 
        }
        return ans;
    }
};
