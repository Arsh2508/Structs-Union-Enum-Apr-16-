#include <stdio.h>
#include "struct.h"

void input(char *, int);
void find(struct Book*, const int);
int main()
{
	const int n = 4;
	struct Book ob[n];
	
	for(int i = 0; i < n; ++i){
		printf("\nEnter %d'th book's details\n", i + 1);
		
		printf("Enter title: ");
		input(ob[i].title, 50);

		printf("Enter author: ");
		input(ob[i].author, 30);	

		printf("Enter the year: ");
		scanf("%d", &ob[i].year);
		while(getchar() != '\n');
	}	
	find(ob, n);	

	return 0;

}
