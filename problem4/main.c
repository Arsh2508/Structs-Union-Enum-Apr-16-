#include <stdio.h>
#include "comp_data_typ.h"

void input(char *, int);

int main()
{
	const int n = 3;
	struct Product obj[3];
	
	for(int i = 0; i < n; ++i){
		printf("\nEnter %d'th product\n", (i + 1));
		printf("Enter name: ");
		input(obj[i].name, 20);
		
		printf("Enter category (1 for ELECTRONICS, 2 for FOOD, 3 for CLOTHING): ");
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1: 
				obj[i].category = ELECTRONICS; 
				break;
			case 2: 
				obj[i].category = FOOD;
				break;
			case 3: 
				obj[i].category = CLOTHING;
				break;
			default: 
				printf("Defaulting catefory to ELECTRONICS \n");
				obj[i].category = ELECTRONICS;
				break;
		}
		
		printf("Enter price: ");
		scanf("%f", &obj[i].price);
		
		while(getchar() != '\n');
	}

	printf("\nAll products of FOOD category\n");
	for(int i = 0; i < n; ++i){
		if(obj[i].category == FOOD){
			printf("\nName: %s\n", obj[i].name);
			printf("Price: %.2f$\n", obj[i].price);
		}
	}
	
	return 0;
}
