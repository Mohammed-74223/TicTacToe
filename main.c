#include <stdio.h>
int printTicTacToe(char array2[3][3]){
    printf("\t%c\t|\t%c\t|\t%c\t\n", array2[0][0], array2[0][1], array2[0][2]);
    printf("----------------|---------------|---------------\n");
    printf("\t%c\t|\t%c\t|\t%c\t\n", array2[1][0], array2[1][1], array2[1][2]);
    printf("----------------|---------------|---------------\n");
    printf("\t%c\t|\t%c\t|\t%c\t\n", array2[2][0], array2[2][1], array2[2][2]);
    return 0;
}
int checkplayerround(int num){
    if (num%2==0){
        return 1;
    }
    else{
        return 2;
    }
}
int insert(){
    int placeholder;
    char array1[3][3]={{'1','2','3'}, {'4', '5', '6'}, {'7', '8','9'}};
    int player=0;
    int scanplayer;
    char symbol;
    for(int i =0; i<9; i++){
        scanplayer=checkplayerround(player);
        player++;
        if (scanplayer==1){
            printf("Player One turn\n");
           symbol='X';
        } else{
            printf("PLayer Two turn\n");
            symbol='O';
        }
        printf("Enter the number: ");
        scanf("%d", &placeholder);
        if (placeholder==1){
            array1[0][0]=symbol;
            printTicTacToe(array1);
        }
        if (placeholder==2){
            array1[0][1]=symbol;
            printTicTacToe(array1);
        }
        if (placeholder==3){
            array1[0][2]=symbol;
            printTicTacToe(array1);
        }
        if (placeholder==4){
            array1[1][0]=symbol;
            printTicTacToe(array1);
        }
        if (placeholder==5){
            array1[1][1]=symbol;
            printTicTacToe(array1);
        }
        if (placeholder==6){
            array1[1][2]=symbol;
            printTicTacToe(array1);
        }
        if (placeholder==7){
            array1[2][0]=symbol;
            printTicTacToe(array1);
        }
        if (placeholder==8){
            array1[2][1]=symbol;
            printTicTacToe(array1);
        }
        if (placeholder==9){
            array1[2][2]=symbol;
            printTicTacToe(array1);
        }
        }
}


int checkplayersymbol(int symbol){
    /*if(symbol=='X' || symbol=='x'){
        printf("First player symbol: X\n");
        printf("Second Player symbol: O\n");
    } else if (symbol=='O' || symbol=='o'){
        printf("First player symbol: O\n");
        printf("Second Player symbol: X\n");
    }else {
        printf("Invalid Input, Try again\n");
    }*/
    printf("First player is X\n");
    printf("Second player is O\n");
}
int main(){
    int choice=0;
    char array1[3][3]={{'1','2','3'}, {'4', '5', '6'}, {'7', '8','9'}};
    char playerOne;
    /*printf("Enter First player symbol: ");
    scanf("%c", &playerOne);*/
    checkplayersymbol(playerOne);
    printTicTacToe(array1);
    insert();
}
