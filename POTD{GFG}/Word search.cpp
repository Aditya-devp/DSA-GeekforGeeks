class Solution {
public:
    int m, n;
vector<vector<bool>> vis;
bool isSafe(int x, int y){
    return x>=0 && x<m &&  y>=0 && y<n;
}
bool dfs(int index, int x, int y, string target, vector<vector<char>>& board){
    if(index == target.length()-1 ){
        return true;
    }
    vis[x][y] = true;
    int dx[4] = { 1 , 0 , 0 , -1} ,dy[4] = {0, 1, -1, 0};
    bool f = false;
    for(int i = 0; i < 4; i++){
        int x_ = x + dx[i], y_ = y + dy[i];
        if(isSafe(x_, y_) && !vis[x_][y_] && board[x_][y_] == target[index + 1]){
            f = f or dfs(index + 1,x_, y_, target, board);
        }
    }
    return f;
}
bool isWordExist(vector<vector<char>>& board, string word) {
    m = board.size(), n = board[0].size();
    for(int i = 0 ; i < m; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == word[0]){
                vis.resize(m , vector<bool>(n, false));
                bool f = dfs(0, i, j, word, board);
                if(f) return true;
            }
        }
    }
    return false;
}
};
