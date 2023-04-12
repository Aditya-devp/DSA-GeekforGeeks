class Solution {
    public static int dominantPairs(int n, int[] arr) {
       int j=n/2;
        int res=0;
        

        Arrays.sort(arr,0,j);
        Arrays.sort(arr,j,n);
        
        while(j<n){

            int x=0,y=n/2-1;
            int ch=-1;
            while(x<=y){
                int mid=(x+y)/2;
                if(arr[mid]>=5*arr[j]){
                    ch=mid;
                    y=mid-1;
                }else{
                    x=mid+1;
                }
            }
           
            if(ch!=-1){
                res+=n/2-ch;
            }
            j++;
        }
        return res;
    }
}
        
