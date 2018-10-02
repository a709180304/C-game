/******************************************************************************
** Student name:zhaofeng guo 	...
** Student number:s3568521 	...
** Course: 			Advanced Programming Techniques - S1 2018
******************************************************************************/

#include "helpers.h"

#define MAX 100

void readRestOfLine()
{
    int ch;
    while(ch = getc(stdin), ch != EOF && ch != '\n')
    { } /* Gobble each character. */

    /* Reset the error status of the stream. */
    clearerr(stdin);
}



char * valid(){
    char line[MAX + EXTRA_SPACES];
    char *end = malloc(strlen(line) + EXTRA_SPACES);

    printf("please enter choice:");
    fgets(line, MAX + EXTRA_SPACES, stdin);

    if(line[strlen(line)-1] != '\n'){
        readRestOfLine();
    }

    line[strlen(line) - 1] = 0;
    line[strcspn(line, "\n")] = '\0';
    strcpy(end, line);

    return end;

}





