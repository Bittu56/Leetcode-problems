class Solution {
public:
    vector<vector<string>> result;
    bool isValid(vector<string>& board, int row, int col) {

        for(int i = row; i>=0; i--) {
            if(board[i][col] == 'Q')
                return false;
        }
        

        for(int i = row, j = col; i>=0 && j >= 0; i--, j--) {
            if(board[i][j] == 'Q')
                return false;
        }
        

        for(int i = row, j = col; i>=0 && j<board.size(); i--, j++) {
            if(board[i][j] == 'Q')
                return false;
        }
        
        
        
        return true;
    }
    void solve(vector<string>& board, int row) {
        if(row == board.size()) {
            result.push_back(board);
            return;
        }

        for(int i = 0; i<board.size(); i++) {
            if(isValid(board, row, i)) {
                board[row][i] = 'Q';
                
                solve(board, row+1);
                
                board[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        if(n == 0)
            return {};
        vector<string> board(n, string(n, '.')); 
        
        solve(board, 0);
        
        return result;
    }
};
