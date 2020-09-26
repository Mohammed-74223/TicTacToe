#include <stdio.h>
#include <stdlib.h>




int checkplayersymbol(){
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
    printf("\n");
    return 0;
}


int printTicTacToe(char array2[3][3]){ // two print the basic game board and then print the game after being updated
    system("cls");
    checkplayersymbol();
    printf("\t%c\t|\t%c\t|\t%c\t\n", array2[0][0], array2[0][1], array2[0][2]);
    printf("----------------|---------------|---------------\n");
    printf("\t%c\t|\t%c\t|\t%c\t\n", array2[1][0], array2[1][1], array2[1][2]);
    printf("----------------|---------------|---------------\n");
    printf("\t%c\t|\t%c\t|\t%c\t\n", array2[2][0], array2[2][1], array2[2][2]);
    printf("\n");
    return 0;
}
int checkplayerround(int num){ // to check the round of players
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
    int num=0;
    char symbol;
    for(int i =0; i<9;){
        scanplayer=checkplayerround(player); // to know the either player one or player two
        if (scanplayer==1){
            printf("Player One turn\n");
            symbol='X'; // if the it's the first player then, the symbol would be "x"
        } else{
            printf("PLayer Two turn\n");
            symbol='O'; // the symbol would be "o"
        }
        printf("Enter the number: ");
        scanf("%d", &placeholder); // to enter the number of the cell to be replaced
        if (placeholder==1 && array1[0][0]=='1'){
            array1[0][0]=symbol;
            printf("\n");
            player++;
            i++;
            printTicTacToe(array1);
        }
        if (placeholder==2 && array1[0][1]=='2'){
            array1[0][1]=symbol;
            printf("\n");
            i++;
            player++;
            printTicTacToe(array1);
        }
        if (placeholder==3 && array1[0][2]=='3'){
            array1[0][2]=symbol;
            printf("\n");
            i++;
            player++;
            printTicTacToe(array1);
        }
        if (placeholder==4 && array1[1][0]=='4'){
            array1[1][0]=symbol;
            printf("\n");
            i++;
            player++;
            printTicTacToe(array1);
        }
        if (placeholder==5 && array1[1][1]=='5'){
            array1[1][1]=symbol;
            printf("\n");
            i++;
            player++;
            printTicTacToe(array1);
        }
        if (placeholder==6 && array1[1][2]=='6'){
            array1[1][2]=symbol;
            printf("\n");
            i++;
            player++;
            printTicTacToe(array1);
        }
        if (placeholder==7 && array1[2][0]=='7'){
            array1[2][0]=symbol;
            printf("\n");
            i++;
            player++;
            printTicTacToe(array1);
        }
        if (placeholder==8 && array1[2][1]=='8'){
            array1[2][1]=symbol;
            printf("\n");
            i++;
            player++;
            printTicTacToe(array1);
        }
        if (placeholder==9 && array1[2][2]=='9'){
            array1[2][2]=symbol;
            printf("\n");
            i++;
            player++;
            printTicTacToe(array1);
        }
        if ((array1[0][0]=='X' && array1[0][1]=='X' && array1[0][2]=='X') ||
            (array1[0][0]=='X' && array1[1][0]=='X' && array1[2][0]=='X') ||
            (array1[0][0]=='X' && array1[1][1]=='X' && array1[2][2]=='X')
            || (array1[1][0]=='X' && array1[1][1]=='X' && array1[1][2]=='X') ||
            (array1[0][2]=='X' && array1[1][1]=='X' && array1[2][0]=='X') || (array1[0][2]=='X' && array1[1][2]=='X'
            && array1[2][2]=='X') || (array1[0][1]=='X' && array1[1][1]=='X' && array1[2][1]=='X') ||
            (array1[2][0]=='X' && array1[2][1]=='X' && array1[2][2]=='X')){ // to check all possible winning cases for x
            printf(" First player wins");
            num++;
            break;
        }
        if ((array1[0][0]=='O' && array1[0][1]=='O' && array1[0][2]=='O') ||
            (array1[0][0]=='O' && array1[1][0]=='O' && array1[2][0]=='O') ||
            (array1[0][0]=='O' && array1[1][1]=='O' && array1[2][2]=='O')
            || (array1[1][0]=='O' && array1[1][1]=='O' && array1[1][2]=='O') ||
            (array1[0][2]=='O' && array1[1][1]=='O' && array1[2][0]=='O') || (array1[0][2]=='O' && array1[1][2]=='O'
            && array1[2][2]=='O') || (array1[0][1]=='O' && array1[1][1]=='O' && array1[2][1]=='O') ||
            (array1[2][0]=='O' && array1[2][1]=='O' && array1[2][2]=='O')){ // to check all possible winning cases for o
            printf(" Second player wins");
            num++;
            break;
        }
    }
    if (num==0){
        printf("Draw no one wins"); // to check if the game ends with draw case
    }
    return 0;
}



int main(){ // calling the functions here
    char array1[3][3]={{'1','2','3'}, {'4', '5', '6'}, {'7', '8','9'}};
    printTicTacToe(array1);
    insert();

}