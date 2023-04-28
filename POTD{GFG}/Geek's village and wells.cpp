class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        vector<vector<int>> ans(n, vector<int>(m,0));
        queue<pair<int,pair<int,int>>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j]=='W'){
                q.push({0,{i,j}});
                ans[i][j]=0;
                }
            }
        }
        
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int dis=q.front().first;
                int row=q.front().second.first;
                int col=q.front().second.second;
                q.pop();
                 if(row-1>=0 && col>=0 && col<m && (c[row-1][col]=='.' || c[row-1][col]=='H')&& ans[row-1][col]==0){
                     ans[row-1][col]=dis+1;
                     q.push({dis+1,{row-1,col}});
                 }
                if(col-1>=0 && row>=0 && row<n && (c[row][col-1]=='.' || c[row][col-1]=='H')&& ans[row][col-1]==0){
                     ans[row][col-1]=dis+1;
                     q.push({dis+1,{row,col-1}});
                 }
                if(row+1<n && col>=0 && col<m && (c[row+1][col]=='.' || c[row+1][col]=='H')&& ans[row+1][col]==0){
                     ans[row+1][col]=dis+1;
                     q.push({dis+1,{row+1,col}});
                 }
                if(col+1<m && row>=0 && row<n && (c[row][col+1]=='.' || c[row][col+1]=='H')&& ans[row][col+1]==0){
                     ans[row][col+1]=dis+1;
                     q.push({dis+1,{row,col+1}});
                 }
                 
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j]=='.')
                ans[i][j]=0;
                
                if(c[i][j]=='H'){
                    if(ans[i][j]==0)
                    ans[i][j]=-1;
                    else
                    ans[i][j]=ans[i][j]*2;
                }
            }
        }
        return ans;
    }
};
