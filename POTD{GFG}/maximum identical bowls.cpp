class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
         long long int sum = 0;
        for(auto i:arr){
            sum += i;
        }
        
        while(N){
            if(sum%N==0)
                return N;
            N--;
        }
        return N;
    }
};
