#include <stdio.h>
#include "car.h"

struct Car* compareCars(struct Car* car1, struct Car* car2)
{
	if(car1->price > car2->price){
		return car1;
	}
	else{
		return car2;
	}

}
