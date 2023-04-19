class Solution{
    public:
    bool wifiRange(int N, string S, int X){
         int tmp = 0;
        for(auto e:S){
            if(-tmp > X) return false;
            if(e == '1') tmp = X;
            else tmp--;
        }
        if(tmp < 0) return false;
        return true;
    }
};
