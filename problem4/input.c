#include <stdio.h>
#include <string.h>

void input(char * st, int n){  
	
	fgets(st, n, stdin);

       	char * find = strchr(st, '\n');
        if(find){
                *find = '\0';
        }
        else{
                while(getchar() != '\n');
        }
}

