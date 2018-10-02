/******************************************************************************
** Student name:zhaofeng guo 	...
** Student number:s3568521 	...
** Course: 			Advanced Programming Techniques - S1 2018
******************************************************************************/

#include "game.h"


 char s1[]={"load 1"};
   char s2[]={"load 2"};
   char *c;
   char *w;
   int x;
   int y;
  char *endptr;
   
 
   Cell board[BOARD_HEIGHT][BOARD_WIDTH];

void showCommand() {
	    printf("\n");
		printf("forward(or f)\n");
		printf("turn_left (or l)\n");
		printf("turn_right (or l)\n");
		printf("quit");
		printf("\n");
}

void init_game()
{
      Position position;
   Direction direction;
   Player player;
   while(TRUE){
   
  c=valid();

   if (strcmp(s1,c)==0){
          loadBoard(board, BOARD_1);
                displayBoard(board, NULL);
printf("load <g> \n");
		printf("init <x>,<y>,<direction>\n");
		printf("quit");
		printf("\n");
            
            
            
            
           int *g;
    char choice[20];

    while (1)
    {
       
        fgets(choice, sizeof(choice), stdin);
        if (choice[strlen(choice) - 1] != '\n')
            readRestOfLine();
        choice[strlen(choice) - 1] = '\0';

        if (strlen(choice) == 4 && strcmp("quit", choice) == 0)
            return COMMAND_QUIT;

        if (strlen(choice) == 6 && strncmp("load ", choice, 5) == 0 
            && (choice[5] == '1' || choice[5] == '2'))
        {
            *g = choice[5] - '0';
            return COMMAND_LOAD;
        }
printf("0----");
        if (strncmp("init ", choice, 5) == 0 
            && ('0' <= choice[5] && choice[5] <= '9')
            && choice[6] == ',' && ('0' <= choice[7] && choice[7] <= '9') 
            && choice[8] == ','
            && (strcmp(choice + 9, DIRECTION_NORTH) == 0 
                || strcmp(choice + 9, DIRECTION_EAST) == 0 
                || strcmp(choice + 9, DIRECTION_SOUTH) == 0 
                || strcmp(choice + 9, DIRECTION_WEST) == 0))
        {
             position.x= choice[5] - '0';
            position.y = choice[7] - '0';
           
            if (strcmp(choice + 9, DIRECTION_NORTH) == 0) {
                
direction=NORTH;
initialisePlayer(&player, &position, direction);
placePlayer(board,position);


displayBoard(board, &player);
showCommand();
playGame(&player,board);

            }
            if (strcmp(choice + 9, DIRECTION_EAST) == 0){
               
                direction = EAST;

initialisePlayer(&player, &position, direction);
placePlayer(board,position);



displayBoard(board, &player);

showCommand();
playGame(&player,board);

}
             if 
            (strcmp(choice + 9, DIRECTION_SOUTH) == 0)
                {
                      direction = SOUTH;
            initialisePlayer(&player, &position, direction);
placePlayer(board,position);


displayBoard(board, &player);

playGame(&player,board);
showCommand();
}
            else{
                direction = WEST;
                initialisePlayer(&player, &position, direction);
placePlayer(board,position);


displayBoard(board, &player);
showCommand();
playGame(&player,board);

            }
            return COMMAND_INIT;
        }

        printf("Invalid Input.\n\n");
    }




   }
    else if (strcmp(s2,c)==0){
          loadBoard(board, BOARD_2);
           displayBoard(board, NULL);
printf("load <g> \n");
		printf("init <x>,<y>,<direction>\n");
		printf("quit");
		printf("\n");
            
            
            
            int *g;
    char choice[20];

    while (1)
    {
        
        fgets(choice, sizeof(choice), stdin);
        if (choice[strlen(choice) - 1] != '\n')
            readRestOfLine();
        choice[strlen(choice) - 1] = '\0';

        if (strlen(choice) == 4 && strcmp("quit", choice) == 0)
            return COMMAND_QUIT;

        if (strlen(choice) == 6 && strncmp("load ", choice, 5) == 0 
            && (choice[5] == '1' || choice[5] == '2'))
        {
            *g = choice[5] - '0';
            return COMMAND_LOAD;
        }

        if (strncmp("init ", choice, 5) == 0 
            && ('0' <= choice[5] && choice[5] <= '9')
            && choice[6] == ',' && ('0' <= choice[7] && choice[7] <= '9') 
            && choice[8] == ','
            && (strcmp(choice + 9, DIRECTION_NORTH) == 0 
                || strcmp(choice + 9, DIRECTION_EAST) == 0 
                || strcmp(choice + 9, DIRECTION_SOUTH) == 0 
                || strcmp(choice + 9, DIRECTION_WEST) == 0))
        {
             position.x= choice[5] - '0';
            position.y = choice[7] - '0';
            
            if (strcmp(choice + 9, DIRECTION_NORTH) == 0) {
                
placePlayer(board,position);

direction=NORTH;

initialisePlayer(&player, &position, direction);
displayBoard(board, &player);
showCommand();
playGame(&player,board);


            }
            if (strcmp(choice + 9, DIRECTION_EAST) == 0){
                
                direction = EAST;
placePlayer(board,position);


initialisePlayer(&player, &position, direction);

displayBoard(board, &player);
showCommand();
playGame(&player,board);

}
             if 
            (strcmp(choice + 9, DIRECTION_SOUTH) == 0)
                {
                    direction = SOUTH;
            
placePlayer(board,position);

initialisePlayer(&player, &position, direction);
displayBoard(board, &player);
showCommand();
playGame(&player,board);

                }
            else{
                direction = WEST;
placePlayer(board,position);

initialisePlayer(&player, &position, direction);
displayBoard(board, &player);
  showCommand();
playGame(&player,board);
         
            }
            return COMMAND_INIT;
        }

        printf("Invalid Input.\n\n");
    }




   }
else if (strcmp(COMMAND_QUIT,c)==0){
         
            
       return;
    
   }
}
}


void playGame(Player *player, Cell board[BOARD_HEIGHT][BOARD_WIDTH]){
while (TRUE){

      char *ww;
ww = valid();
int g,h,i,j,k,l,m;
g=strcmp(ww, COMMAND_TURN_RIGHT);
h=strcmp(ww, COMMAND_TURN_LEFT);
i=strcmp(ww, COMMAND_FORWARD);
j=strcmp(ww, COMMAND_QUIT);
k=strcmp(ww,COMMAND_TURN_RIGHT_SHORTCUT);
l=strcmp(ww,COMMAND_TURN_LEFT_SHORTCUT);
m=strcmp(ww,COMMAND_FORWARD_SHORTCUT);
if(g==0||k==0){
 
      turnDirection(&player, TURN_RIGHT);
	
      displayBoard(board, &player);
       printf("\n");
		printf("forward(or f)\n");
		printf("turn_left (or l)\n");
		printf("turn_right (or r)\n");
		printf("quit");
		printf("\n");
	
}
if(h==0||l==0){
 
      turnDirection(&player, TURN_LEFT);
	
      displayBoard(board, &player);
       printf("\n");
		printf("forward(or f)\n");
		printf("turn_left (or l)\n");
		printf("turn_right (or r)\n");
		printf("quit");
		printf("\n");
	}
if(i==0||m==0){
     movePlayerForward(board, &player);;
	
      displayBoard(board, &player);
       printf("\n");
		printf("forward(or f)\n");
		printf("turn_left (or l)\n");
		printf("turn_right (or r)\n");
		printf("quit");
		printf("\n");
	
}
if(j==0){

      printf("player have move %d",player->moves);
     Menu();
      return;
}




}


}