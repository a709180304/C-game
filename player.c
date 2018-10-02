/******************************************************************************
** Student name:zhaofeng guo 	...
** Student number:s3568521 	...
** Course: 			Advanced Programming Techniques - S1 2018
******************************************************************************/

#include "player.h"

void initialisePlayer(Player * player, Position * position, Direction direction)
{
 
	   player->position = *position;
	    player->direction = direction;

    player->moves = 0;
                  }

void turnDirection(Player * player, TurnDirection turnDirection)
{
    
    if(turnDirection==TURN_LEFT){
     
        
        if (player->direction==EAST){
             player->direction = NORTH;
              
        }
        else if (player->direction==NORTH){
             player->direction = WEST;
            
        }
        else if (player->direction==WEST){
             player->direction = SOUTH;
             
        }
        else 
        {
             player->direction =EAST;
             
        }
    }
      if(turnDirection==TURN_RIGHT){
        if (player->direction==EAST){
             player->direction = SOUTH;
        }
        else if (player->direction==SOUTH){
             player->direction = WEST;
        }
        else if (player->direction==WEST){
             player->direction = NORTH;
        }
        else 
        {
             player->direction = EAST;
        }
    }
}
Position getNextForwardPosition(const Player * player)
{
    /* TODO */
    Position position;

        if (player->direction==EAST){
             position.y = player->position.y; 
        position.x ++;
        }
        if (player->direction==SOUTH){
             position.y ++;
        position.x = player->position.x;
        }
        if (player->direction==WEST){
             position.y = player->position.y; 
        position.x--;
        }
        if (player->direction==NORTH){
               position.y --;
        position.x = player->position.x;
        }
    return position;
}

void updatePosition(Player * player, Position position)
{
   player->position = position;}


void displayDirection(Direction direction)
{
     if(direction==NORTH){
         
         printf(DIRECTION_ARROW_OUTPUT_NORTH);
         
    }
   else if(direction==SOUTH){
       
         printf(DIRECTION_ARROW_OUTPUT_SOUTH);
    }
   else if(direction==EAST){
        
         printf(DIRECTION_ARROW_OUTPUT_EAST);
    }
    else 
         printf(DIRECTION_ARROW_OUTPUT_WEST);
    
}

