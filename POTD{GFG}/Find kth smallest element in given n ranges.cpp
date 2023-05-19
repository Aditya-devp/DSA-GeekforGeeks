class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        sort(range.begin(),range.end());
        vector<int>ans;
        for(int i = 0 ; i < q ; i++){
            int query = queries[i];
            int temp = 0;
            bool flag = false;
            for(int j = 0 ; j < range.size() ; j++){
                if(j == 0){
                    temp += range[j][0] - 0 - 1;
                }
                if(j > 0){
                    if(range[j][0] > range[j-1][1])
                        temp += range[j][0] -  range[j-1][1] - 1;
                }
                
                if(query + temp >= range[j][0] and  query+temp <= range[j][1]){
                   
                    ans.push_back(query+temp);
                    flag = true;
                    break;
                }
            }
            if(!flag){
                
                ans.push_back(-1);
            }
        }
        return ans;
    } 
};
