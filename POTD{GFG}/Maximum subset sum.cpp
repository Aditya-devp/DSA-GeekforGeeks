class Solution {

  public:
    long long findMaxSubsetSum(int N, vector<int> &A) {
       long long second = 0 , first = A[0];
for(int i=1;i<N;i++) second = max(first,second)+A[i], swap(first,second);
return max(first,second);
    }
};
