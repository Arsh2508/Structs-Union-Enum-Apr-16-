#include <stdio.h>
#include "car.h"

void input(char *, int);
void Car_input(struct Car* car){
	printf("Enter brand: "); 
	input(car->brand, 20); 
	printf("Enter model: "); 
	input(car->model, 20); 
	printf("Enter year: "); 
	scanf("%d", &(car->year)); 
	printf("Enter price: "); 
	scanf("%f", &(car->price)); 
	while(getchar() != '\n'); 
}
