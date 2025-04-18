#include <stdio.h>
#include <string.h>

void rm_newline(char * st){             //function for using fgets without newlines
        char * find = strchr(st, '\n');
        if(find){
                *find = '\0';
        }
        else{
                while(getchar() != '\n');
        }
}

