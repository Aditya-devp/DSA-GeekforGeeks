class Solution{
    public:
        int modulo(string s,int m)
        {
             int k=0;
            for(char c:s)k=(k*2 +(c-'0'))%m;
            return k;
        
        }
};
