#include <stdio.h>
#include "struct.h"

void find(struct Book* ob, const int n)
{
	int old = 0;
	for(int i = 1; i < n; ++i){
		if(ob[i].year < ob[old].year){
			old = i;
		}
	}
	
	printf("The oldest book: \"%s\", author - %s, %d year\n", ob[old].title, ob[old].author, ob[old].year);

}

