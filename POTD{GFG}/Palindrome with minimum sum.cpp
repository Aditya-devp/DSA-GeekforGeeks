  int count =0;
        int n= s.length();
        for(int i=0;i<(n+1)/2;i++){
            if(s[i]!=s[n-1-i]){
                if(s[i]=='?' || s[n-1-i]=='?'){
                   if(s[i]=='?') s[i] = s[n-1-i];
                   else if(s[n-1-i] == '?') s[n-1-i] = s[i];
                }
                else return -1;
            }
        }
      
       
       int k = 0;
       int l=(k+1);
        while(l<(n+1)/2){
         if(s[k]=='?' || s[l]=='?') {
             if(s[k]=='?') k++;
             else if(s[l]=='?') l++;
         }
         else{
             count+=2*(abs(s[k]-s[l]));
             k=l;
             l++;
         }
         
       }
     
     return count;
