#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

# define MAX 10

const char *rq = "RQ";
const char *rl = "RL";
const char *c = "C";
const char *status = "STATUS";
const char *exit = "EXIT";

typedef struct p
{
    char command[10];
    char number_p[3];
    int size;
    int start;
    int end;
    
} Process;

typedef struct h
{
    int holes;
    int partitions;

} Holes;

int allocate_mem (){
   
    }

char** inputstr(char * userinput){
    size_t i = 0;
    char *str_array[] = {};
    for (int j=0;j<3;j++){
        char * str_temp= "" ;
        while (userinput[i] != '\0' && isspace(userinput[i]) ) {       /* Stop looping when we reach the null-character. */
            strcat(str_temp,i);
            //printf("%c\n", userinput[i]);    /* Print each character of the string. */
            i++;
        }
        strcpy(str_array, str_temp);
    }
}

void main(int argc, char *argv[]) {
    char input;
    input = atoi(argv[1]);
    Process *p = NULL;
    Holes *h = NULL;

    printf("Allocated %d bytes of memory.\n", input);

    char ** temp = inputstr("RQ P3 1200000 B");
    printf("results : %s",temp) ;
    printf("command>");

    

   
    
}

