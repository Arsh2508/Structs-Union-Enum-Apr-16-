#include <stdio.h>
#include "student.h"

void input(char *,int n);
void high_marks(struct student*, const int);
int main()
{
	const int n = 5;

	struct student st[n];
	
	for(int i = 0; i < n; ++i){
		printf("\nEnter Student %d's details\n", i + 1);
		
		printf("Enter name: ");
		input(st[i].name, 30);

		printf("Enter age: ");
		scanf("%d", &st[i].age);

		printf("Enter marks: ");
		scanf("%f", &st[i].marks);
		
		while(getchar() != '\n');
	}
	
	high_marks(st, n);	

	return 0;
}
