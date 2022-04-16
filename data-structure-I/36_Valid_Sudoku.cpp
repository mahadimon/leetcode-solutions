/*
https://leetcode.com/problems/valid-sudoku/
Test Case-1:
[["8","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]

Test Case-2:
[["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]

*/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        char dot = '.';
        for (int i=0; i< 9; i++){
            for (int j=0; j< 9; j++){
                if(board[i][j] != dot){
                    //printf("%d==%d--%c\n", i, j, board[i][j]);
                    for(int k=0; k< 9;k++){
                        if(k != i && board[k][j] == board[i][j])
                            return false;
                    }
                    for(int k=0; k< 9;k++){
                        if(k != j && board[i][k] == board[i][j])
                            return false;
                    }
                    if(i<3){
                        if(j<3){
                            for(int k=i;k<3;k++){
                                for(int m=0;m<3;m++){
                                    if(k!=i && m!=j && board[i][j]==board[k][m])
                                        return false;
                                }
                            }
                        }else if(j>2 && j<6){
                            for(int k=i;k<3;k++){
                                for(int m=3;m<6;m++){
                                    if(k!=i && m!=j && board[i][j]==board[k][m])
                                        return false;
                                }
                            }
                        }else{
                            for(int k=i;k<3;k++){
                                for(int m=6;m<9;m++){
                                    if(k!=i && m!=j && board[i][j]==board[k][m])
                                        return false;
                                }
                            }
                        }
                    }else if(i>2 && i<6){
                        if(j<3){
                            for(int k=i;k<6;k++){
                                for(int m=0;m<3;m++){
                                    if(k!=i && m!=j && board[i][j]==board[k][m])
                                        return false;
                                }
                            }
                        }else if(j>2 && j<6){
                            for(int k=i;k<6;k++){
                                for(int m=3;m<6;m++){
                                    if(k!=i && m!=j && board[i][j]==board[k][m])
                                        return false;
                                }
                            }
                        }else{
                            for(int k=i;k<6;k++){
                                for(int m=6;m<9;m++){
                                    if(k!=i && m!=j && board[i][j]==board[k][m])
                                        return false;
                                }
                            }
                        }
                    }else{
                        if(j<3){
                            for(int k=i;k<9;k++){
                                for(int m=0;m<3;m++){
                                    if(k!=i && m!=j && board[i][j]==board[k][m])
                                        return false;
                                }
                            }
                        }else if(j>2 && j<6){
                            for(int k=i;k<9;k++){
                                for(int m=3;m<6;m++){
                                    if(k!=i && m!=j && board[i][j]==board[k][m])
                                        return false;
                                }
                            }
                        }else{
                            for(int k=i;k<9;k++){
                                for(int m=6;m<9;m++){
                                    if(k!=i && m!=j && board[i][j]==board[k][m])
                                        return false;
                                }
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};