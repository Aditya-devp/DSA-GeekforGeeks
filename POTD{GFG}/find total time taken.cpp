class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        int ans=-1;
        map<int,int>m1;
        for(int i=0;i<arr.size();i++){
            m1[arr[i]]++;
            if(m1[arr[i]]>1){
                ans+=time[arr[i]-1];
            }else{
                ans++;
            }
        }
        return ans;
    }
};
