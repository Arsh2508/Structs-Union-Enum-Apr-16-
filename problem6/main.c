#include <stdio.h>
#include "car.h"

struct Car* compareCars(struct Car*,struct Car*);
void input(char *, int);
int main()
{
	struct Car car1;
	struct Car car2;
	struct Car* car;

	printf("Enter car1's details\n");

	printf("Enter brand: ");
	input(car1.brand, 20);
	printf("Enter model: ");
	input(car1.model, 20);
	printf("Enter year: ");
	scanf("%d", &car1.year);
	printf("Enter price: ");
	scanf("%f", &car1.price);
	while(getchar() != '\n');

        printf("\nEnter car2's details\n");
        
        printf("Enter brand: ");
        input(car2.brand, 20);
        printf("Enter model: ");
        input(car2.model, 20);
        printf("Enter year: ");
        scanf("%d", &car2.year);
        printf("Enter price: ");                        
        scanf("%f", &car2.price);   

	car = compareCars(&car1, &car2);
	printf("\nThe more expensive car is: %s %s - $%.2f\n", car->brand, car->model, car->price);
	
	return 0;			
}
