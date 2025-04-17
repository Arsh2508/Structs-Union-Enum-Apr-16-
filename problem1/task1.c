#include <stdio.h>
#include "struct.h"
int main()
{
	struct Car car[3];
	for(int i = 0; i < 3; ++i){
		printf("\nEnter car%d's details\n", i + 1);

		printf("Brand: ");
		scanf("%s", car[i].brand);

		printf("Model: ");
		scanf("%s", car[i].model);

		printf("Year: ");
		scanf("%d", &car[i].year);

		printf("Price: ");
		scanf("%f", &car[i].price);
	}	
	for(int i = 0; i < 3; ++i){
		printf("\nCar%d's details\n", i + 1);
		printf("Brand - %s\n", car[i].brand);
		printf("Model - %s\n", car[i].model);
		printf("Year - %d\n", car[i].year);
		printf("Price - %.2f\n", car[i].price);
	}
	
	return 0;
}
