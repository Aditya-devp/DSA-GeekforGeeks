bool safecut(string s,int start,int end){
        long long num=0,j=1;
        for(int i=end;i>=start;i--){
            if(s[i]=='1'){
                num+=j;
            }
            j*=2;
        }
        while(num>1){
            if(num%5!=0)return false;
            num/=5;
        }
        return true;
    }
    int solve(string s,int start,int end){
        if(end<start)
        return 0;
        
        if(s[start]=='0')
        return -1;
        if(safecut(s,start,end))
        return 1;
        
        int ans=INT_MAX;
           for(int i=start;i<=end;i++){
               if(safecut(s,start,i)){
                   int second=solve(s,i+1,end);
                   
                   if(second!=-1)
                 ans=min(ans,1+second);
               }
           }
           
           if(ans==INT_MAX)
           return -1;
           
           return ans;
    }
    int cuts(string s){
        int n=s.length();
        return solve(s,0,n-1);
        
    }

