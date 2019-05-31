/******************************************************************************
** Student name:zhaofeng guo 	...
** Student number:s3568521 	...
** Course: 			Advanced Programming Techniques - S1 2018
******************************************************************************/

#include "carboard.h"

int main()
{

}

void Menu(){

Cell BOARD[BOARD_HEIGHT][BOARD_WIDTH];
    
int a;

    while (TRUE){
    printf("Welcome to Car Board \n");
    printf("--------------------\n");
    printf("1. Play game\n");
    printf("2. Show student's information\n");
    printf("3. Quit\n\n");
    printf("Please enter your choice:");
    
    scanf("%d",&a);


    
    if(a==1){

        printit();
        initialiseBoard(BOARD);
        init_game();
        
            }

else if(a==2)
{
     showStudentInformation();
}

    else if(a==3){
printf("End \n");
    
    return ;
   }
   }
}

void printit(){
    printf("\n");

printf("You can use the following commands to play the game: \n");
printf("load <g> \n");
printf("g: number of the game board to load  \n");
printf("init <x>,<y>,<direction> \n");
printf("x: horizontal position of the car on the board (between 0 & 9) \n");
printf("y: vertical position of the car on the board (between 0 & 9) \n");
printf("direction: direction of the car¡¯s movement (north, east, south, west) \n");
printf("forward (or f)  \n");
printf("turn_left (or l)  \n");
printf("turn_right (or r)  \n");
printf("quit \n");    printf("\n");

}
void showStudentInformation()
{
    printf("\n");
    printf("Name:%s\n",STUDENT_NAME);
    printf("Student No:%s\n",STUDENT_ID);
   printf("Email:%s\n",STUDENT_EMAIL);
       printf("\n");

    /* TODO */
}
