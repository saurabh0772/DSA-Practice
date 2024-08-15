#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<char>> &sudoko, int row, int col, char ch){
    //check that the element should not present in the row
    for(int i=0; i<9; i++){
        //checking in row
        if(sudoko[row][i] == ch) return false;

        //checking in col
        if(sudoko[i][col] == ch) return false;

        //checking in inner 3 by 3 sqaure
        if(sudoko[3*(row/3) + (i/3)][3*(col/3) + (i%3)] == ch) return false;
    }
    return true;
}

bool solve(vector<vector<char>> &sudoko){
    
    //finding the empty element in sudoko;

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(sudoko[i][j] == '.'){
                //kuch kuch kro
                //dot mil gya toh check kro  ki usme hum kya place kr skte h
                for(char ch = '1'; ch < '9'; ch++){
                    if(isValid(sudoko, i, j, ch)){ // hum wo num place kr skte h
                        sudoko[i][j] = ch;
                        if(solve(sudoko) == true) return true;

                        sudoko[i][j] = '.';
                        return false;
                    }
                }
                return false;
            }
        }
    }
    return true;

}

int main(){
    vector<vector<char>> sudoko; 

    for(int i=0; i<9; i++){
        vector<char> c;
        for(int j=0; j<9; j++){
            char ch; cin >> ch;
            c.push_back(ch);
        }
        sudoko.push_back(c);
    }

    solve(sudoko);
    cout << endl;
    cout << endl;
    cout << "Solution for Given Sudoko : " << endl;
    for(auto it:sudoko){
        for(auto ch : it){
            cout << ch << " ";
        }cout << endl;
    }
}



















// class Solution {
// public:
//     void solveSudoku(vector<vector<char>>& board) {
//         solve(board);
//     }

//     bool solve(vector<vector<char>> &board){

//         for(int i=0; i<board.size(); i++){
//             for(int j=0; j<board[0].size(); j++){
//                 if(board[i][j] == '.'){
//                     //check for 1 - 9 in the places
//                     for(char ch='1'; ch<='9'; ch++){
//                         if(isValid(board, i, j, ch)){
//                             board[i][j] = ch;

//                             if(solve(board) == true){
//                                 return true;
//                             }else board[i][j] = '.';
                            
//                         }
//                     } return false;
//                 }
                
//             }
//         }
//         return true;
//     }

//     bool isValid(vector<vector<char>> &board, int row, int col, char ch){

//         for(int i=0; i<9; i++){
//             if(board[i][col] == ch) return false;

//             if(board[row][i] == ch) return false;

//             if(board[3 * (row / 3) + i/3][3 * (col/3) + i%3] == ch) return false;

//         }

//         return true;

//     }

// };