 string reverseEqn (string s)
        {
            //code here.
            string temp="",ans="";
            int n=s.length();
            
            for(int i=n-1; i>=0; --i) {
                
                if(s[i]-'0'>=0 and s[i]-'0'<=9) {
                    temp+=s[i];
                }
                else {
                     reverse(temp.begin(),temp.end());
                     ans+=temp;
                     ans+=s[i];
                     temp="";
                }
            }
            reverse(temp.begin(),temp.end());
            ans+=temp;
            return ans;
        }
