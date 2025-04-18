#include <stdio.h>
#include "struct.h"

void rm_newline(char *);
void find(struct Car*, const int);
int main()
{
	const int n = 4;
	struct Car cars[n];
	for(int i = 0; i < n; ++i){
		printf("\nEnter %d'th car's details\n", i + 1);
		printf("Enter brand: ");
		fgets(cars[i].brand, 20, stdin);
		rm_newline(cars[i].brand);

		printf("Enter model: ");
		fgets(cars[i].model, 20, stdin);
		rm_newline(cars[i].model);
	
		printf("Enter year: ");
		scanf("%d", &cars[i].year);

		printf("Enter price: ");
		scanf("%f", &cars[i].price);
	
		while(getchar() != '\n');	//removing all \n form buffer for using fgets
	}
	find(cars, n);

	return 0;
}
