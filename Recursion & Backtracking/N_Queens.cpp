#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> &board, int n){
    int trow = row, tcol = col;

    while(trow >=0 && tcol >= 0){
        if(board[trow][tcol] == 'Q') return false;
        trow--; tcol--;
    }

    trow = row; tcol = col;

    while(tcol >= 0){
        if(board[trow][tcol] == 'Q') return false;
        tcol--;
    }

    trow = row; tcol = col;

    while(trow < n && tcol >= 0){
        if(board[trow][tcol] == 'Q') return false;
        trow++; tcol--;
    }

    return true;
}
    
void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n){

    if(col == n){
        ans.push_back(board);
        return;
    }

    for(int i=0; i<n; i++){
        if(isSafe(i, col, board, n)){
            board[i][col] = 'Q';
            solve(col+1, board, ans, n);
            board[i][col] = '.';
        }
    }
}
    
    

int main(){

    int n; cin >> n;
    vector<vector<string>> ans;
    string s(n, '.');
    vector<string> board(n);
    for(int i=0; i<n; i++){
        board[i] = s;
    }

    solve(0, board, ans, n);

    for(auto it: ans){
        for(auto ch : it){
            cout << ch << endl;
        }cout << endl;
    }

}