/******************************************************************************
** Student name:zhaofeng guo 	...
** Student number:s3568521 	...
** Course: 			Advanced Programming Techniques - S1 2018
******************************************************************************/

#include "board.h"

Cell BOARD_1[BOARD_HEIGHT][BOARD_WIDTH] =
{
    { BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY },
    { EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, BLOCKED, EMPTY, BLOCKED, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED }
};

Cell BOARD_2[BOARD_HEIGHT][BOARD_WIDTH] =
{
    { BLOCKED, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY }
};

void initialiseBoard(Cell board[BOARD_HEIGHT][BOARD_WIDTH])

{
    int i,j;
    for ( i = 0;i<BOARD_HEIGHT;i++){
        for( j=0;j<BOARD_WIDTH;j++)
        {
            board[i][j]=EMPTY;
        }
    }
    /* TODO */
}

void loadBoard(Cell board[BOARD_HEIGHT][BOARD_WIDTH],
               Cell boardToLoad[BOARD_HEIGHT][BOARD_WIDTH])
{
int i,j;
   for (i = 0;i<BOARD_HEIGHT;i++){
        for(j=0;j<BOARD_WIDTH;j++)
        {
           board[i][j]=boardToLoad[i][j];
        }
    }
    /* TODO */
}

Boolean placePlayer(Cell board[BOARD_HEIGHT][BOARD_WIDTH], Position position)
{


    if (position.y < 0 || position.y >= BOARD_WIDTH || position.x < 0 || position.x >= BOARD_HEIGHT) 
        return FALSE; 
    if (board[position.y][position.x] == BLOCKED) 
        return FALSE;

    board[position.y][position.x] = PLAYER; 
    return TRUE;
}

PlayerMove movePlayerForward(Cell board[BOARD_HEIGHT][BOARD_WIDTH],
                             Player * player)
{
    /* TODO */
Position position=getNextForwardPosition(player);

if(position.x>9||position.y>9||position.x<0||position.y<0)
{

  return OUTSIDE_BOUNDS;}
else if(board[position.y][position.x]==BLOCKED)
{
 
    return CELL_BLOCKED;
}
else{

board[player->position.y][player->position.x]=EMPTY;

printf("xxxxx=%d",position.y);
printf("yyyyy=%d",position.x);
board[position.y][position.x]=PLAYER;
updatePosition(player,position);
    return PLAYER_MOVED;
}
}


void displayBoard(Cell board[BOARD_HEIGHT][BOARD_WIDTH], Player * player)
{
int i,j;
printf("\n");
    printf("| |0|1|2|3|4|5|6|7|8|9|\n");
    for(i=0;i<BOARD_WIDTH;i++){
        printf("|%d|",i);
        
        for(j=0;j<BOARD_HEIGHT;j++){
            if(board[i][j]==BLOCKED)
            {
                 
                printf("%s|",BLOCKED_OUTPUT);
               
            }
            else if (board[i][j]==EMPTY){
                
                printf("%s|",EMPTY_OUTPUT);
              
            }
            else 
            {
               
                displayDirection(player->direction);
                 
                printf("|");
            }
        }
printf("\n");

        }

    }
    /* TODO */

