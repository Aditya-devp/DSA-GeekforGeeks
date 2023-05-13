class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
         int count = 0;
        for(int i =0;i<(n+1)/2;i++){
            if(arr[i]!=arr[n-i-1]){
                count++;
            }
        }
        return (count/2 + count%2);
       
    }
};
