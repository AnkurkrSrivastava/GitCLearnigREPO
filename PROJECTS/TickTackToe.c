#include <stdio.h> //for input and output
#include <stdlib.h> //for memory allocation

char board[3][3];
// this function initializes the board,meaning it sets all the cells to empty and avoids garbage values
void initializeBoard(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]=' ';
        }
    }
}
// display the board
void displayBoard(){
    printf("  0 1 2\n");
    for(int i=0;i<3;i++){
        printf("%d ",i);
        for(int j=0;j<3;j++){
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}
// make a move on the board
// check if the move is valid
void makeMove(int row, int col, char player){
    if(row>=0 && row<3 && col>=0 && col<3 && board[row][col]==' '){
        board[row][col]=player;
    }else{
        printf("Invalid move!\n");
    }
}
// check if a player has won
int checkWin(){
    // Check rows
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' '){
            return 1;
        }
    }
    // Check columns
    for(int i=0;i<3;i++){
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=' '){
            return 1;
        }
    }
    // Check diagonals
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' '){
        return 1;
    }
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' '){
        return 1;
    }
    return 0;
}

// check if the game is a draw
int checkDraw(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]==' '){
                return 0;
            }
        }
    }
    return 1;
}
// switch the player
void switchPlayer(char *player){
    if(*player=='X'){
        *player='O';
    }else{
        *player='X';
    }
}

int main(){
    initializeBoard();
    char player='X';
    int row, col;
    while(1){
        displayBoard();
        printf("Player %c, enter your move (row and column): ", player);
        scanf("%d %d", &row, &col);
        makeMove(row, col, player);
        if(checkWin()){
            displayBoard();
            printf("Player %c wins!\n", player);
            break;
        }
        if(checkDraw()){
            displayBoard();
            printf("It's a draw!\n");
            break;
        }
        switchPlayer(&player);
    }
    printf("Game Over!\n");
    printf("Thank you for playing!\n");
    printf("Exiting the game...\n");
    
    return 0;
}