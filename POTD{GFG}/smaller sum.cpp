class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        vector<long long> v;
        map<int,long long> m;
        
        for(int i=0;i<n;i++) m[arr[i]]++;
        long long s = 0;
        
        for(auto x:m){
            m[x.first] = s;
            s += (x.first)*(x.second);
        }
        for(int i=0;i<n;i++) v.push_back(m[arr[i]]);
       
        return v;
    }
};
