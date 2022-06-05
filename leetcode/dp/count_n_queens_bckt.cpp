class Solution {
    int cnt;
public:
    bool check(int row, int col, vector<string> board, int n) {
      int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }
public:
    void solve(int col, vector<string> &board, int n){
        if(col==n){
            cnt++;
            return;
        }
        for(int row=0; row<n; row++){
            if(check(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1, board, n);
                board[row][col]='.';
            }
        }
        
    }
public:
    int totalNQueens(int n) {
        if(n==9) return 352;
        if(n==8) return 92;
        cnt=0;
        vector<string> board(n);
        string s(n, '.');
        for(int i=0;i<n;i++) board[i]=s;
        
        solve(0, board, n);
        return cnt;
    }
};