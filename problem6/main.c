#include <stdio.h>
#include "car.h"

void Car_input(struct Car*);
struct Car* compareCars(struct Car*,struct Car*);
void input(char *, int);
int main()
{
	struct Car car1;
	struct Car car2;
	struct Car* car;

	printf("Enter car1's details\n");
	Car_input(&car1);

        printf("\nEnter car2's details\n");
	Car_input(&car2);

	car = compareCars(&car1, &car2);
	printf("\nThe more expensive car is: %s %s - $%.2f\n", car->brand, car->model, car->price);
	
	return 0;			
}
