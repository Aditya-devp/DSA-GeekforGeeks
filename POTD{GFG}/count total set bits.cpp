
class Solution {
  public:
    long long countBits(long long N) {
         long long ans = 0;
        for(int i = 0; i<= N; i++){
            ans += __builtin_popcount(i);
        }
        return ans;

    
    }
};
