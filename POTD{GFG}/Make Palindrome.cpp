class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        unordered_set<string>s;
        for(int i = 0;i<n;i++){
            string str=arr[i];
            reverse(str.begin(),str.end());
            if(s.find(str)!=s.end()){
                s.erase(str);
            } else{
                s.insert(arr[i]);
            }
        }
        if(s.size()==0){
            return true;
        }
        if(s.size()==1){
            auto it = s.begin();
            string str = *it;
            int i=0, j=str.length()-1;
            while(i<=j){
                if(str[i]!=str[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }
        return false;
    }
};
