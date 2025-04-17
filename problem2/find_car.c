#include <stdio.h>
#include "struct.h"

void find(struct Car* car, const int n){
	int min_i = 0;		// minimum index
	for(int i = 1; i < n; ++i){
		if(car[i].price < car[min_i].price){
			min_i = i;
		}
	}
	
	printf("\nCheapest car: %s %s (%d) - $%.2f\n", car[min_i].brand, car[min_i].model, car[min_i].year, car[min_i].price);
	
	int y_i = 0; 	// year index
	for(int i = 1; i < n; ++i){
		if((car+i)->year > (car + y_i)->year){
			y_i = i;
		}
	}
	printf("Newest car: %s %s (%d) - $%.2f\n", car[y_i].brand, car[y_i].model, car[y_i].year, car[y_i].price);
	
}

